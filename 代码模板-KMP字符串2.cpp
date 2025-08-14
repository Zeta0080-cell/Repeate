//����ģ��-KMP�ַ���2
#include <bits/stdc++.h>
using namespace std;
const int N = 100010, M = 10010; //NΪģʽ�����ȣ�Mƥ�䴮����

int n, m;
int ne[M]; //next[]���飬�����ͷ�ļ�next��ͻ
char s[N], p[M];  //sΪģʽ���� pΪƥ�䴮 

int main()
{
    cin >> n >> s+1 >> m >> p+1;  //�±��1��ʼ
    //��next[]����
    for(int i = 2, j = 0; i <= m; i++)
    {
        while(j && p[i] != p[j+1]) j = ne[j];
        if(p[i] == p[j+1]) j++;
        ne[i] = j;
    }
    //ƥ�����
    for(int i = 1, j = 0; i <= n; i++)
    {
        while(j && s[i] != p[j+1]) j = ne[j];
        if(s[i] == p[j+1]) j++;
        if(j == m)  //����ƥ����������ӡ��ͷ�±�, ��0��ʼ
        {
            //ƥ����ɺ�ľ������
            //�磺�����0��ʼ��ƥ���Ӵ�������ĸ�±�
            //printf("%d ", i - m); (����1��ʼ����1)
            j = ne[j];            //�ٴμ���ƥ��
        }
    }
    return 0;
}
