//代码模版-直接插入排序2
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",&a[i]);
	}
	printf("\n");
}

void insert(int a[],int n)
{
	int key;
	for(int i=1;i<n;i++)
	{
		key=i;
		int j=i-1;
		while(j>0&&a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	print(a,n);
}

int main()
{
	int n;
	int a[N];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insert(a,n);
	return 0;
}
