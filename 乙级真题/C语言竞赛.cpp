#include <iostream>
#include <cstdio>
#include <map>
#include <string>
using namespace std;
bool isPrime(int n)
{
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    freopen("E://input.txt","r",stdin);
    int n,k;
    string id,temp;
    map<string,int> m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>id;
        m[id]=i+1;
    }
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>temp;
        if(m[temp])
        {
            if(m[temp]==-1) cout<<temp<<": "<<"Checked"<<endl;
            else if(m[temp]==1)
            {
                cout<<temp<<": "<<"Mystery Award"<<endl;
                m[temp]=-1;
            }
            else if(isPrime(m[temp]))
            {
                cout<<temp<<": "<<"Minion"<<endl;
                m[temp]=-1;
            }
            else
            {
                cout<<temp<<": "<<"Chocolate"<<endl;
                m[temp]=-1;
            }
        }
        else cout<<temp<<": "<<"Are you kidding?"<<endl;
    }
    return 0;
}
