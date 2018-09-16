#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    freopen("E://input.txt","r",stdin);
    int n,a,b;
    double max=0,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        temp=(double)a*(double)a+(double)b*(double)b;
        if(temp>max) max=temp;
    }
    printf("%.2f",sqrt(max));
    return 0;
}
