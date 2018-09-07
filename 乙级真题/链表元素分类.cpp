#include <iostream>
#include <cstdio>
using namespace std;
struct Node
{
    int num;
    int next;
    int value;
}node[100000],newnode[100000];
int main()
{
   // freopen("E://input.txt","r",stdin);
    int N,K,first,add;
    cin>>first>>N>>K;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&add);
        scanf("%d%d", &node[add].value, &node[add].next);
        node[add].num=add;
    }
    int count=0,j=first;

    do
    {
        if(node[j].value<0)
        {
            newnode[count].num=node[j].num;
            newnode[count].value=node[j].value;
            count++;
        }
        j=node[j].next;
    }while(j!=-1);

    j=first;
    do
    {
        if(node[j].value>=0&&node[j].value<=K)
        {
            newnode[count].num=node[j].num;
            newnode[count].value=node[j].value;
            count++;
        }
        j=node[j].next;
    }while(j!=-1);

    j=first;
    do
    {
        if(node[j].value>K)
        {
            newnode[count].num=node[j].num;
            newnode[count].value=node[j].value;
            count++;
        }
        j=node[j].next;
    }while(j!=-1);

    for(int i=0;i<N;i++)
    {
        if(i!=N-1)
        {
            newnode[i].next=newnode[i+1].num;
            printf("%05d %d %05d\n",newnode[i].num,newnode[i].value,newnode[i].next);
        }
        else
        {
            newnode[i].next=-1;
            printf("%05d %d -1",newnode[i].num,newnode[i].value);
        }
    }
    return 0;
}
