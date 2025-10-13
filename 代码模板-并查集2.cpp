//����ģ��-���鼯2 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 1;

int n,m;
int p[N];

int find(int x) //����x�����ڽڵ㣬���ҽ���·��ѹ���Ż� 
{
	if(p[x] != x) p[x] = find(p[x]);
	return p[x]; //���ظ��ڵ� 
}

int main()
{
	scanf("%d%d",&n,&m);
	for(int i = 1; i <= n; i ++)
	{
		p[i] = i;
	}
	while(m--)
	{
		char op[2];
		int a,b;
		scanf("%s%d%d",op,&a,&b);
		if(op[0] == 'M') p[find(a)] = find(b); //��b�ĸ��ڵ�ֱ�Ӳ���a��
		else
		{
			if(find(a) == find(b)) printf("Yes\n");
			else printf("No\n");	
		} 
	}
	return 0;
}
