//代码模板-差分
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
int a[N],d[N];

int main()
{
	int m,n;
	int l,r,c;
	
	//获得原始数组 
	for(int i = 1; i <= n; i ++)
	{
		scanf("%d",&a[i]);
	}
	
	//构造差分数组
	for(int i = 1; i <=n; i ++)
	{
		d[i] = a[i] - a[i - 1];
	} 
	
	//执行操作
	while(m --)
	{
		d[l] += c;
		d[r + 1] -= c;
	}
	
	//利用前缀和求操作完成后的数组（逆操作）
	for(int i = 1; i <= n; i ++)
	{
		d[i] += d[i - 1];	
	} 
	
	//输出结果
	for(int i = 1; i <= n; i ++)
	{
		printf("%d",&d[i]);	
	} 
	return 0;
} 
