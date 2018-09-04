#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    char n;
    int count,i;
    string str;
    scanf("%c",&n);
    getchar();
    getline(cin,str);
    if(n=='C')
    {
        for(i=0;i<str.size();i++)
        {
            count=1;
            while(str[i]==str[i+1])
            {
                i++;
                count++;
            }
            if(count>1) cout<<count;
            cout<<str[i];
        }
    }
    if(n=='D')
    {
        for(i=0;i<str.size();i++)
        {
            count=0;
            while(str[i]>='0'&&str[i]<='9')
            {
                count=count*10+str[i++]-'0';
            }
            for(int j=0;j<count;j++)
                cout<<str[i];
            if(count==0) cout<<str[i];
        }
    }
    return 0;
}
