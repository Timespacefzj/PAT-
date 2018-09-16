#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    freopen("E://input.txt","r",stdin);
    int n,m,sum,a;
    cin>>n>>m;
    int *val=new int[m];
    int *cor=new int[m];
    for(int i=0;i<m;i++)
    {
        cin>>val[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>cor[i];
    }
    for(int j=0;j<n;j++)
    {
        sum=0;
        for(int i=0;i<m;i++)
        {
            cin>>a;
            if(a==cor[i])
            {
                sum+=val[i];
            }
        }
        printf("%d\n",sum);
    }
    delete []val;
    delete []cor;
    return 0;
}
