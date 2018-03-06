#include<stdio.h>

int main()
{
  int a1=0,a2=0,a3=0;
  int ac=0,ab=0,aj=0;
  int bc=0,bb=0,bj=0;
  char x,y;
  int n,i;
  scanf("%d",&n);
  getchar();
  for(i=0;i<n;i++)
  {
    scanf("%c %c",&x,&y);
    getchar();
    if(x=='C'&&y=='J')
    {
      a1++;
      ac++;
    }

    if(x=='C'&&y=='B')
    {
      a3++;
      bb++;
    }
    if(x=='B'&&y=='C')
    {
      a1++;
      ab++;
    }
    if(x=='B'&&y=='J')
    {
      a3++;
      bj++;
    }
    if(x=='J'&&y=='B')
    {
      a1++;
      aj++;
    }
    if(x=='J'&&y=='C')
    {
      a3++;
      bc++;
    }
    if(x=='C'&&y=='C'||x=='B'&&y=='B'||x=='J'&&y=='J')
    {
      a2++;
    }

  }
  printf("%d %d %d\n",a1,a2,a3);
  printf("%d %d %d\n",a3,a2,a1);
  if(ab>=ac&&ab>=aj)
    printf("B ");
  else
    if(ac>=aj)
      printf("C ");
    else
      printf("J ");
  if(bb>=bc&&bb>=bj)
    printf("B");
  else
    if(bc>=bj)
      printf("C");
    else
      printf("J");
  return 0;
}
