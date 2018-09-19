#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int cmp(int a,int b)
{
    return a>b;
}
int main()
{
    freopen("E://input.txt","r",stdin);
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    int j;
    for(j=0;a[j]>j+1&&j<n;j++);
    cout<<j;
    return 0;
}
