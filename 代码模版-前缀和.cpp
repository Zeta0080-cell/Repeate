//����ģ��-ǰ׺��
#include<bits/stdc++.h>
using namespace std;
const int N=1e6;

int main()
{
	int s[N];//���ڴ洢ǰ׺�� 
	s[N]=0;
	int a[N];//���ڴ洢���� 
	int n;//�������еĳ���
	int m;//һ��m��ѯ��
	int l,r;//ѯ�ʵı߽�
	scanf("%d%d",&n,&m);
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
