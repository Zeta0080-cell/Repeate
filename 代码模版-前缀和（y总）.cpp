//����ģ��-ǰ׺�ͣ�y��
#include<bits/stdc++.h>
using namespace std;
const int N=100010

int n,m;
int a[N],int s[N];

int main()
{
	ios::sync_with_stdio(false);
	scanf("%d%d",&n,&m);
	for(int i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		s[i]=s[i-1]+a[i];
	}
	while(m--)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		printf("%d\n",s[r]-s[l-1]);
	}
	return 0;	
} 
