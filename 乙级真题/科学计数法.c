#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    int n,m,i,j=3,q,k;
    gets(s);
    for(i=0;s[i]!='E';i++);
    if(s[i+1]=='-')
        q=1;
    if(s[i+1]=='+')
        q=2;
    m=strlen(s)-i-2;
    if(m==4)
    {
        n=(s[i+2]-'0')*1000+(s[i+3]-'0')*100+(s[i+4]-'0')*10+(s[i+5]-'0');
    }
    if(m==3)
    {
        n=(s[i+2]-'0')*100+(s[i+3]-'0')*10+(s[i+4]-'0');
    }
    if(m==2)
    {
        n=(s[i+2]-'0')*10+(s[i+3]-'0');
    }
    if(m==1)
    {
        n=(s[i+2]-'0');
    }
    k=n;
    if(s[0]=='-')
        printf("%c",s[0]);
    if(n!=0)
    {
        if(q==2)
        {
            if(s[1]!='0')
                printf("%c",s[1]);
            if(n<i-3)
            {
                while(k!=0)
                {
                    printf("%c",s[j++]);
                    k--;
                }
                printf(".");
                for(i=n+3;s[i]!='E';i++)
                    printf("%c",s[i]);
            }
            if(n>=i-3)
            {
                for(i=3;s[i]!='E';i++)
                    printf("%c",s[i]);
                for(j=i-3;j<n;j++)
                    printf("0");
            }

        }
        if(q==1)
        {

            printf("0.");
            for(j=1;j<=n-1;j++)
                printf("0");
            for(j=1;s[j]!='E';j++)
            {
                if(s[j]!='.')
                    printf("%c",s[j]);
            }
        }
    }
    if(n==0)
    {
        for(i=1;s[i]!='E';i++)
            printf("%c",s[i]);
    }

    return 0;
}
