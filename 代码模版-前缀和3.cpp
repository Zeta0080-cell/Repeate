//代码模版-前缀和3
#include<bits/stdc++.h> 
using namespace std;
const int N=1e3;

int main()
{
	int s[N]={0};
	int a[N];
	int n,m,l,r;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s[i]=s[i-1]+a[i];
	}
	while(m--)
	{
		scanf("%d%d",&l,&r);
		printf("%d",s[r]-s[l-1]);
	}
	return 0;
}
