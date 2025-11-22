//´úÂëÄ£°å-Ã°ÅİÅÅĞò
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;

void bubblesort(int a[],int n)
{
	int temp;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n - i -1; j ++)
		{
			if(a[j] > a[j + 1])	
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}	
	}	
} 

int main()
{
	int n;
	int a[N];
	cin >> n;
	for(int i = 0; i < n; i ++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	for(int i = 0; i < n; i ++)
	{
		printf("%d ",a[i]);
	}
	return 0;
} 
