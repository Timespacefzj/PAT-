#include <iostream>
#include <string.h>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{

    freopen("E://input.txt","r",stdin);
    int a,b,c,x,y,carry=0,sum=0,j;
    char jinzhi[21];
    scanf("%s %d %d",jinzhi,&a,&b);
    for(int i=strlen(jinzhi)-1,j=0;i>=0;i--,j++)
    {
        x=a%10;
        y=b%10;
        if(jinzhi[i]-'0'!=0) c=(x+y+carry)%(jinzhi[i]-'0');
        else c=(x+y+carry)%10;
        sum+=c*(int)(pow(10,j)+0.5);
        a/=10;
        b/=10;
        if(jinzhi[i]-'0'!=0) carry=(x+y+carry)/(jinzhi[i]-'0');
        else carry=(x+y+carry)/10;
    }
    if(carry>0) sum+=carry*(int)(pow(10,j)+0.5);
    printf("%d",sum);
    return 0;
}
