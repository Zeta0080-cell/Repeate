//����ģ��-���8
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int a[N],d[N];

int main()
{
	int n;
	int l,r,c;
	int a[N];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)//���������� 
	{
		d[i]=a[i]-a[i-1];
	}
	cin>>l>>r>>c;
	d[l]+=c;
	d[r+1]-=c;
	for(int i=1;i<=n;i++)//����ǰ׺��������������
	{
		d[i]+=d[i-1];	
	} 
	for(int i=1;i<=n;i++)
	{
		printf("%d",a[i]); 
	}
	return 0;
} 
