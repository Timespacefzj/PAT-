#include<stdio.h>
#include<string.h>
int main()
{
  char s[1001];
  int  i,j,b,h=0,temp=0,p=0;
  scanf("%s %d",s,&b);
  for(i=0;s[i]!='\0';i++)
  {
    h=h*10+(s[i]-'0');
    if(h>=b)
    {
        p=1;
        temp=h/b;
        printf("%d",temp);
    }
    else
        if(p)
        printf("0");
    h=h%b;
  }
  if(p==0)
    printf("0");
  printf(" ");
  printf("%d",h);
  return 0;
}
