#include <iostream>
#include <cstdio>

int main()
{
    //freopen("E://input.txt","r",stdin);
    int m,n,a,b,k,temp;
    scanf("%d%d%d%d%d",&m,&n,&a,&b,&k);
    getchar();
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            scanf("%d",&temp);
            if(temp>=a&&temp<=b) printf("%03d ",k);
            else printf("%03d ",temp);
        }
        scanf("%d",&temp);
        if(temp>=a&&temp<=b) printf("%03d",k);
        else printf("%03d",temp);
        printf("\n");
    }
    return 0;
}
