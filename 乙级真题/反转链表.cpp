#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<fstream>
#include<vector>
using namespace std;
typedef struct stu{
  char s1[10];
  int num;
  char s2[10];
}STU;
STU temp,temp1;
vector<STU>m;
int main()
{
  int n,i,j,n1,num2;
  int t1;
  int k=0;
  char s[10],str1[10],str2[10];
  cin>>s>>n>>n1;
  for(i=0;i<n;i++)
  {
    cin>>str1>>num2>>str2;
    strcpy(temp.s1,str1);
    strcpy(temp.s2,str2);
    temp.num=num2;
    if(strcmp(temp.s1,s)==0)
    {
      if(i!=0)
      {
        temp1=m[0];
        m[0]=temp;
        temp=temp1;
      }
    }
    m.push_back(temp);
  }
  for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    {
      if(strcmp(m[i].s2,m[j].s1)==0)
      {
        k++;
        temp1=m[i+1];
        m[i+1]=m[j];
        m[j]=temp1;
        break;
      }
      if(strcmp(m[i].s2,m[j].s1)!=0&&j==n-1)
      {
        i=n-1;
        break;
      }
    }
//  for(i=0;i<n;i++)
//    printf("%s %d %s\n",m[i].s1,m[i].num,m[i].s2);
//  printf("\n\n");
//  printf("%d\n",k);
  n=k+1;
  t1=n/n1;
  for(i=0;i<t1;i++)
  {
    for(j=i*n1+n1-1;j>=i*n1;j--)
    {
      if(j==i*n1)
      {
        if((i+2)*n1-1<n)
          printf("%s %d %s\n",m[j].s1,m[j].num,m[i*n1+2*n1-1].s1);
        else
        {
          if(t1*n1<n)
            printf("%s %d %s\n",m[j].s1,m[j].num,m[t1*n1].s1);
          else
            printf("%s %d -1\n",m[j].s1,m[j].num);
        }
      }
      else
        printf("%s %d %s\n",m[j].s1,m[j].num,m[j-1].s1);
    }
  }
  for(i=n1*t1;i<n;i++)
    printf("%s %d %s\n",m[i].s1,m[i].num,m[i].s2);
  return 0;
}
