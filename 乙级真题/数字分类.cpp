#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int c1=0,c2=0,c3=0,c2Num=0,c4Num=0,c5=0;
    float c4=0;
    int n,x,i=1;
    cin>>n;
    while(n--)
    {
        cin>>x;
        switch(x%5)
        {
            case 0:if(x%2==0) c1+=x; break;
            case 1:c2+=i*x;i=-i;c2Num++;break;
            case 2:c3++;break;
            case 3:c4+=x;c4Num++;break;
            case 4:if(x>c5)c5=x;break;
        }
    }
    (c1>0)?(cout<<c1<<" "):(cout<<"N ");
    (c2Num>0)?(cout<<c2<<" "):(cout<<"N ");
    (c3>0)?(cout<<c3<<" "):(cout<<"N ");
    (c4>0)?(cout<<fixed<<setprecision(1)<<c4/c4Num<<" "):(cout<<"N ");
    (c5>0)?(cout<<c5):(cout<<"N");
    return 0;
}
