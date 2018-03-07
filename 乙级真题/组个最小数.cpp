#include<stdio.h>
int main()
{
    int a[10],b[100];
    int i,j,k=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        for(j=0;j<a[i];j++)
        {
          b[k]=i;
          k++;
        }
    }
    if(b[0]==0)
    {
        for(i=0;i<k;i++)
        {
            if(b[i]!=0)
            {
                int temp;
                temp=b[i];
                b[i]=b[0];
                b[0]=temp;
                break;
            }
        }
    }
    for(i=0;i<k;i++)
        printf("%d",b[i]);
    return 0;
}
