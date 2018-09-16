#include <iostream>
#include <cstdio>
using namespace std;
int gcd(int a,int b)
{
    return !b?a:gcd(b,a%b);
}
int main()
{
    freopen("E://input.txt","r",stdin);
    int a1,a2,b1,b2,k,flag=0;
    double max,min;
    double a,b;
    scanf("%d/%d %d/%d %d",&a1,&a2,&b1,&b2,&k);
    a=(double)a1/(double)a2;
    b=(double)b1/(double)b2;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    for(int i=1;i<k;i++)
    {
        if((double)i/(double)k>min&&(double)i/(double)k<max&&gcd(i,k)==1)
        {
            if(flag==1) printf(" ");
            printf("%d/%d",i,k);
            flag=1;
        }
    }
    return 0;
}
