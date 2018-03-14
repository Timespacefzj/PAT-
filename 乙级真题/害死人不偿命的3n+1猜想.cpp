#include <cstdio>


int main()
{
    int n,step=0;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n&1) n=(3*n+1)/2;
        else n=n>>1;
        step++;
    }
    printf("%d\n",step);
    return 0;
}
