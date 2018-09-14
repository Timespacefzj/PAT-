#include <iostream>
#include <cstdio>
#include <map>
#include <string>
using namespace std;

int main()
{
    freopen("E://input.txt","r",stdin);
    int m,n,s,p;
    bool flag=false;
    map<string,int> lis;
    cin>>m>>n>>s;
    string *str=new string[m];
    for(int i=0;i<m;i++)
    {
        cin>>str[i];
        if(!lis[str[i]]) lis[str[i]]=1;
    }
    p=s-1;
    while(p<m)
    {
        if(lis[str[p]]==1)
        {
            cout<<str[p]<<endl;
            lis[str[p]]=2;
            flag=true;
            p+=n;
        }
        else
        {
            while(lis[str[p]]==2) p++;
            if(p<m)
            {
                cout<<str[p]<<endl;
                flag=true;
                p+=n;
            }
            else break;
        }
    }
    if(!flag) cout<<"Keep going...";
    delete []str;
    return 0;
}
