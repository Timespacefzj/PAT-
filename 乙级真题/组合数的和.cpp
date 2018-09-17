#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;
int str2int(string s)
{
    istringstream in(s);
    int x;
    in>>x;
    return x;
}
int main()
{
    freopen("E://input.txt","r",stdin);
    int n,sum=0;
    string a[10];
    string b[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                b[i]=a[i]+a[j];
                sum+=str2int(b[i]);
            }
        }
    }
    printf("%d",sum);
    return 0;
}
