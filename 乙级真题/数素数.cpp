//��ͨɸѡ��--������˹����ɸ��
//����˼�룺�����ı���һ����������
//ʵ�ַ�������һ������ΪN+1�����鱣����Ϣ��0��ʾ������1��ʾ����������
//�ȼ������е���������������ʼ��Ϊ0�����ӵ�һ������2��ʼ����2�ı��������Ϊ����������Ϊ1����
//һֱ������N��Ȼ�������һ�ˣ��ҵ�2�������һ������3������ͬ���Ĵ���ֱ�������������ȻΪ0������Ϊ������
//˵��������1���⴦���ɡ�
#include <iostream>
#include <cstring>
using namespace std;
#define N 10005
#define M 200005
bool check[M];
long prime[N];

int main()
{
    int tot = 0, m, n, count = 0;
    memset(check, 0, sizeof(check));
    for (int i = 2; tot <= N; i++)
    {
        if (!check[i])
            prime[tot++] = i;
        for (int j = 2 * i; j <= M; j += i)
        {
            check[j] = true;
        }
    }
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        cout << prime[i-1];
        if (++count % 10 == 0 && i != n)
        cout << endl;
        else if (i != n)
        cout << " ";
    }
    return 0;
}
