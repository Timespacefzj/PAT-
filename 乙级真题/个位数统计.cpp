#include<stdio.h>
int main()
{
	int i, j;
	char a[1001];
	int k;
	int s[10] = {0};
	scanf("%s", a);
	for( i = 0;  a[i] != '\0'; i++)
	{
		k = a[i] - '0';
		s[k]++;
	}

	for( i = 0; i < 10; i ++)
	{
		if( s[i] != 0)
			printf("%d:%d\n", i, s[i]);
	}
	return 0;
}

