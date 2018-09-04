#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    for(int i=0;i<n*4;i++){
        cin>>str;
        if(str[2]=='T') cout<<(int)str[0]-'A'+1;
    }
    return 0;
}
