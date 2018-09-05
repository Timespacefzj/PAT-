#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    //freopen("E://input.txt","r",stdin);
    int T,k,n1,b,t,n2;
    cin>>T>>k;
    for(int i=0;i<k;i++)
    {
        cin>>n1>>b>>t>>n2;
        if((n1>n2&&b==0)||(n1<n2&&b==1))
        {
            if(t>T) printf("Not enough tokens.  Total = %d.\n",T);
            else
            {
                T+=t;
                printf("Win %d!  Total = %d.\n",t,T);
            }
        }
        else
        {
            if(t>T) printf("Not enough tokens.  Total = %d.\n",T);
            else
            {
                T-=t;
                printf("Lose %d.  Total = %d.\n",t,T);
            }
        }
        if(T==0)
        {
            printf("Game Over.\n");
            return 0;
        }
    }
    return 0;
}
