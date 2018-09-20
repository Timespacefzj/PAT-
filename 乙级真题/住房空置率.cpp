#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    freopen("E://input.txt","r",stdin);
    int n,d,k,count,may=0,empty=0;
    double e,t;
    cin>>n>>e>>d;
    for(int i=0;i<n;i++)
    {
        count=0;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>t;
            if(t<e) count++;
        }
        if(count>k/2&&k>d) empty++;
        if(count>k/2&&k<=d) may++;
    }
    printf("%.1f%% %.1f%%",(double)may/n*100,(double)empty/n*100);
    return 0;
}
