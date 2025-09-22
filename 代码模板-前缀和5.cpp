//代码模板-前缀和5
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int main()
{
	int a[N];
	int s[N];
	int l,r,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s[i]=s[i-1]+a[i];//获得前缀和数组 
	}
	scanf("%d%d",&l,&r);
	printf("%d",s[r]-s[l-1]);
	return 0;
} 
