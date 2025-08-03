//代码模版-差分7
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int a[N],d[N];

int main()
{
	int n,m;
	int l,r,c;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)//构造差分数组 
	{
		d[i]=a[i]-a[i-1];
	}
	while(m--)
	{
		cin>>l>>r>>c;
		d[l]+=c;
		d[r+1]-=c; 
	}
	for(int i=1;i<=n;i++)//利用前缀和求操作后的数组
	{
		d[i]+=d[i-1];	
	} 
	for(int i=1;i<=n;i++)
	{
		printf("%d",a[i]); 
	}
	return 0;
} 
