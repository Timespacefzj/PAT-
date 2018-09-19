#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    freopen("E://input.txt","r",stdin);
    int K,k,l,num[5],count[3];
    string a;
    char m[3][10][5]={0};
    for(int i=0;i<3;i++)
    {
        k=0;
        getline(cin,a);
        for(int j=0;j<a.size();)
        {
            l=0;
            if(a[j++]=='[')
            {
                while(a[j]!=']')
                {
                    m[i][k][l++]=a[j];
                    j++;
                }
                count[i]=k+1;
                m[i][k++][l]='\0';
            }
        }
    }
    cin>>K;
    int flag=1;
    for(int i=0;i<K;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>num[j];
        }
        if(num[0]>count[0]||num[1]>count[1]||num[2]>count[2]||num[3]>count[1]||num[4]>count[0]||
           num[0]<1||num[1]<1||num[2]<1||num[3]<1||num[4]<1)
        {
            cout<<"Are you kidding me? @\\/@\n";
            flag=0;
        }
        else flag=1;
        if(flag==1)
            printf("%s(%s%s%s)%s\n",m[0][num[0]-1],m[1][num[1]-1],
                    m[2][num[2]-1],m[1][num[3]-1],m[0][num[4]-1]);
    }
    return 0;
}
