//普通筛选法--埃拉托斯特尼筛法
//基本思想：素数的倍数一定不是素数
//实现方法：用一个长度为N+1的数组保存信息（0表示素数，1表示非素数），
//先假设所有的数都是素数（初始化为0），从第一个素数2开始，把2的倍数都标记为非素数（置为1），
//一直到大于N；然后进行下一趟，找到2后面的下一个素数3，进行同样的处理，直到最后，数组中依然为0的数即为素数。
//说明：整数1特殊处理即可。
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
