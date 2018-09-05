#include <iostream>
#include <cstdio>
#include <string.h>
struct Stu
{
    char name[6];
    int num=0;
    int thing[10];
    bool flag=false;
};
using namespace std;
int main()
{
    //freopen("E://input.txt","r",stdin);
    int N,M,total=0,cnt=0;
    cin>>N>>M;
    int numm[6],no,count=0;
    char name[4];
    int thing[10];
    Stu *stu=new Stu[N];
    for(int i=0;i<M;i++)
        cin>>numm[i];
    for(int i=0;i<N;i++)
    {
        scanf("%s %d",name,&no);
        strcpy(stu[count].name,name);
        for(int j=0;j<no;j++)
        {
            cin>>thing[j];
            for(int k=0;k<M;k++)
                if(thing[j]==numm[k])
                {
                    stu[count].flag=true;
                    stu[count].thing[stu[count].num++]=thing[j];
                }
        }
        count++;
    }
    for(int i=0;i<count;i++)
    {
        int j;
        if(stu[i].flag==true)
        {
            cnt++;
            printf("%s:",stu[i].name);
            for(j=0;j<stu[i].num;j++)
                printf(" %04d",stu[i].thing[j]);
            printf("\n");
            total+=stu[i].num;
        }
    }
    printf("%d %d",cnt,total);
    delete []stu;
    return 0;
}
