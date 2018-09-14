#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    freopen("E://input.txt","r",stdin);
    int n;
    int a[10002];
    double sum;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    sum=(double)a[0];
    for(int i=1;i<n;i++)
    {
        sum=(sum+a[i])/2;
    }
    int result=floor(sum);
    printf("%d",result);
    return 0;
}
