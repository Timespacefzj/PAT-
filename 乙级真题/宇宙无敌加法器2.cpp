#include <bits/stdc++.h>
using namespace std;
void numrev(string &s){
	reverse(s.begin(),s.end());
}
int main()
{
    freopen("E://input.txt","r",stdin);
	string numsys,s1,s2;
	cin>>numsys>>s1>>s2;
	numrev(numsys),numrev(s1),numrev(s2);
	int i=0,sr=0,syslen=numsys.size();
	int maxlen=max(s1.size(),s2.size());
	s1+=string(maxlen-(int)s1.size(),'0');
	s2+=string(maxlen-(int)s2.size(),'0');
	string res;
	while(i<syslen){
		int idx=(numsys[i]-'0')?(numsys[i]-'0'):10;
		int sum=(s1[i]-'0'+s2[i]-'0'+sr);
		res+='0'+sum%idx;
		sr=sum/idx;
		++i;
	}
	if(sr>0) res+='0'+sr;
	while(res.back()=='0'&&res.size()>1) res.pop_back();
	numrev(res);
	cout<<res<<endl;
	return 0;
}
