#include<stdio.h>
int main(void)
{
    int n,max=0,min,champion,loser,number,x,y;
    scanf("%d",&n);
    min=30000;
    for (;n>0;n--)
    {
        scanf("%d%*c%d%*c%d%*c",&number,&x,&y);
        if (x*x+y*y>max)
        {
            max=x*x+y*y;
            champion=number;
        }
        if (x*x+y*y<min)
        {
            min=x*x+y*y;
            loser=number;
        }
    }
    printf("%04d %04d",loser,champion);
    return 0;
}
