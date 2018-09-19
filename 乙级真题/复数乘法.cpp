#include <iostream>
#include <cstdio>
#include <cmath>
const double eps=1e-8;
using namespace std;

int main()
{
    freopen("E://input.txt","r",stdin);
    double r1,p1,r2,p2,r,p;
    double a1,b1,a2,b2;
    cin>>r1>>p1>>r2>>p2;
    a1=r1*cos(p1);
    b1=r1*sin(p1);
    a2=r2*cos(p2);
    b2=r2*sin(p2);
    r=a1*a2-b1*b2;
    p=a1*b2+a2*b1;
    if(r>eps) r=(int)(r*pow(10,2)+0.5)/pow(10,2);
    else r=(int)(r*pow(10,2)-0.5)/pow(10,2);
    if(p>eps) p=(int)(p*pow(10,2)+0.5)/pow(10,2);
    else p=(int)(p*pow(10,2)-0.5)/pow(10,2);
    printf("%.2f",r);
    if(p>-eps) cout<<"+";
    printf("%.2f",p);
    cout<<"i";
    return 0;
}
