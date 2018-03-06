#include<stdio.h>
void print_base(int num,int base)
{
    int temp,i=0,result[33];
    if(num==0)
        printf("0");
    while(num!=0)
    {
        temp=num%base;
        num/=base;
        result[i++]=temp;
    }
    for(i;i>0;i--)
    {
        printf("%d",result[i-1]);
    }
}
int main()
{
    int a,b,base;
    scanf("%d %d %d",&a,&b,&base);
    if(base<2||base>10)
        return 1;
    print_base(a+b,base);
}
