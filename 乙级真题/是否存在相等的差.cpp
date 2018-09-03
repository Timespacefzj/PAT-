#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N,i,x;
	int a[10000],b[10000]={0};
	scanf("%d",&N);
	for(i=0;i<N;i++)a[i]=i+1;
	for(i=0;i<N;i++){
		scanf("%d",&x);
		b[abs(a[i]-x)]++;
	}
	for(i=N-1;i>=0;i--)
		if(b[i]>1) printf("%d %d\n",i,b[i]);
	return 0;
}
