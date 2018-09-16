#include <iostream>
#include <cstdio>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    freopen("E://input.txt","r",stdin);
    int n,sum;
    cin>>n;
    string a;
    map<int,int> m;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        sum=0;
        cin>>a;
        for(int j=0;j<a.size();j++) sum+=a[j]-'0';
        m[sum]++;
        v.push_back(sum);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout<<v.size()<<endl;
    for(int i=0;i<v.size()-1;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<v[v.size()-1];
    return 0;
}
