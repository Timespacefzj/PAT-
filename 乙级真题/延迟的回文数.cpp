#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPal(string s)
{
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1]) return false;
    }
    return true;
}
string add(string s,string rs)
{
    int t=0;
    for(int i=0;i<s.length();i++){
        t=t+s[i]-'0'+rs[i]-'0';
        s[i]='0'+t%10;
        t/=10;
    }
    if(t>0) s+="1";
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    string s,rs;
    cin>>s;
    if(isPal(s)){
        cout<<s<<" is a palindromic number."<<endl;
        return 0;
    }
    for(int i=0;i<10;i++){
        rs=s;
        reverse(rs.begin(),rs.end());
        cout<<s<<" + "<<rs<<" = ";
        s=add(s,rs);
        cout<<s<<endl;
        if(isPal(s)){
             cout<<s<<" is a palindromic number."<<endl;
        return 0;
        }
    }
    cout<<"Not found in 10 iterations.\n";
    return 0;
}

