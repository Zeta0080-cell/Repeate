//ģ����-���ķ�Χ(�����㷨)7
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int a[N];

int main()
{
	int n,q;//n����,q��ѯ�� 
	int x;
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	} 
	while(q--)
	{
		cin>>x;
		int l=0,r=n-1;
		while(l<r)
		{
			int mid=(l+r)/2;
			if(a[mid]>=x)
			{
				r=mid;
			}
			else
			{
				l=mid+1;
			}
		}
		if(a[l]!=x)
		{
			printf("-1 -1\n");
		}
		else
		{
			printf("%d ",l);
			int l=0,r=n-1;
			while(l<r)
			{
				int mid=(l+r)/2+1;
				if(a[mid]<=x)
				{
					l=mid;
				}
				else
				{
					r=mid-1;
				}
			}
			printf("%d\n",l);
		}
	}
	return 0;
} 
