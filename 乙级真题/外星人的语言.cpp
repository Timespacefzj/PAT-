#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
	int n,r,sum;
	string a;
	while (scanf("%d%d",&n,&r)!=EOF)
	{
		for (int i = n; i != 0; i = i / r)
		{
			int k = i%r;
			//printf("k=%d", k);
			char c = k + '0';
			if (k >= 0&&k <= 9)
			{
				a += c;
			}
			if (k == 10) { a += 'A'; }
			if (k == 11) { a += 'B'; }
			if (k == 12) { a += 'C'; }
			if (k == 13) { a += 'D'; }
			if (k == 14) { a += 'E'; }
			if (k == 15) { a += 'F'; }
		}
		for (int i = a.size() - 1; i >= 0; i--)
		{
			printf("%c",a[i]);
		}
		printf("\n");
		a.clear();
	}
	return 0;
}
