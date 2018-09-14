#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    freopen("E://input.txt","r",stdin);
    int n;
    string pass,str;
    cin>>pass>>n;
    getchar();
    while(n--)
    {
        getline(cin,str);
        if(str=="#") return 0;
        else if(str==pass)
        {
            cout<<"Welcome in"<<endl;return 0;
        }
        else
        {
            cout<<"Wrong password: "<<str<<endl;
        }
    }
    cout<<"Account locked"<<endl;
    return 0;
}
