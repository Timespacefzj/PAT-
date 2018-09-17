#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool cmp(string a,string b)
{
    return a>b;
}
int main()
{
    freopen("E://input.txt","r",stdin);
    int n,m;
    string a,b,temp;
    map<string,string> p;
    map<string,int> reg;
    vector<string> sum;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        p[a]=b;
        p[b]=a;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        if(p[temp]=="") sum.push_back(temp);
        else
        {
            reg[temp]=1;
            if(reg[p[temp]]==1)
            {
                reg[temp]=2;
                reg[p[temp]]=2;
            }
        }
    }
    map<string, int>::iterator it = reg.begin();
    for (; it != reg.end(); it++) {
        if (it->second == 1) {
            sum.push_back(it->first);
        }
    }
    cout<<sum.size()<<endl;
    sort(sum.begin(),sum.end());
    if(sum.size()!=0)
    {
        for(int i=0;i<sum.size()-1;i++)
        cout<<sum[i]<<" ";
        cout<<sum[sum.size()-1];
    }

    return 0;
}
