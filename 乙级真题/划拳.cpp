#include <cstdio>

int main()
{
    int n,failA=0,failB=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a1,a2,b1,b2;
        scanf("%d%d%d",&a1,&a2,&b1,&b2);
        if(a1+b1==a2&&a1+b1!=b2)
            failB++;
        else if(a1+b1!=a2&&a1+b1==b2)
            failA++;
    }
    printf("%d %d\n",failA,failB);
    return 0;
}
