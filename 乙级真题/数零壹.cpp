#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    freopen("E://input.txt","r",stdin);
    string a;
    int sum=0,bin=0,zero=0,one=0;
    getline(cin,a);
    for(int i=0;i<a.size();i++)
    {
        a[i]=tolower(a[i]);
        if(isalpha(a[i])) sum+=a[i]-'a'+1;
    }

    while(sum)
    {
        if(sum&1) one++;
        else zero++;
        sum/=2;
    }
    printf("%d %d\n",zero,one);
    return 0;
}
