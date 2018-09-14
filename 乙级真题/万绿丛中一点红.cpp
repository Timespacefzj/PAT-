#include <iostream>
#include <cstdio>
#include <cmath>
#include <map>
using namespace std;
int mat[1002][1002];
int main()
{
    freopen("E://input.txt","r",stdin);
    int m,n,tol;
    int x,y,count=0;
    map<long,int> rep;
    cin>>m>>n>>tol;
    for(int i=0;i<=n+1;i++)
    {
        for(int j=0;j<=m+1;j++)
        {
            mat[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&mat[i][j]);
            ++rep[mat[i][j]];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(fabs(mat[i][j]-mat[i-1][j-1])>tol&&
               fabs(mat[i][j]-mat[i-1][j])>tol&&
               fabs(mat[i][j]-mat[i-1][j+1])>tol&&
               fabs(mat[i][j]-mat[i][j-1])>tol&&
               fabs(mat[i][j]-mat[i][j+1])>tol&&
               fabs(mat[i][j]-mat[i+1][j-1])>tol&&
               fabs(mat[i][j]-mat[i+1][j])>tol&&
               fabs(mat[i][j]-mat[i+1][j+1])>tol&&
               rep[mat[i][j]]==1)
            {
                count++;
                x=j;
                y=i;
            }
        }
    }
    if(count==1) printf("(%d, %d): %d\n",x,y,mat[y][x]);
    else if(count>1) printf("Not Unique\n");
    else printf("Not Exist\n");
    return 0;
}
