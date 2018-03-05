#include<string.h>
#include<stdio.h>
int main()
{
    char s[4][61];
    int hour, minate;
    int flag1 = 0,flag2 = 0;

    for(int i = 0; i < 4; i++)
        scanf("%s",s[i]);
    for(int i = 0; s[0][i] != '\0'&&s[1][i] != '\0';i++)
    {
        if(s[0][i] == s[1][i]&&flag1==0&&s[0][i]>='A'&&s[0][i]<='G')
        {
            flag1 = 1;flag2 = 1;
            if(s[0][i] == 'A')
                printf("MON ");
            if(s[0][i] == 'B')
                printf("TUE ");
            if(s[0][i] == 'C')
                printf("WED ");
            if(s[0][i] == 'D')
                printf("THU ");
            if(s[0][i] == 'E')
                printf("FRI ");
            if(s[0][i] == 'F')
                printf("SAT ");
            if(s[0][i] == 'G')
                printf("SUN ");
            continue;
        }
        if(s[0][i] == s[1][i]&&flag2==1)
        {
            if(s[0][i]>='0'&&s[0][i]<='9')
            {
                printf("%02d:",s[0][i]-'0');
                break;
            }
            if(s[0][i]>='A'&&s[0][i]<='N')
            {
                printf("%02d:",s[0][i]-55);
                break;
            }
        }

    }

    for(int i = 0; s[2][i]!='\0'&&s[3][i]!='\0';i++)
    {
        if(s[2][i] == s[3][i]&&((s[2][i]>=65&&s[2][i]<=90)||(s[2][i]>=97&&s[2][i]<=122)))
        {
            printf("%02d", i);
            break;
        }
    }
    return 0;
}
