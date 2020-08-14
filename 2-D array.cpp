#include<stdio.h>
#include<conio.h>

int main()
{
	long long int t,l;
	scanf("%lld",&t);
	for(l=0;l<t;l++){
	long long int a[100][100],n,i,j;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[i][j]);
		}
	}

	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			printf("%lld",a[i][j]);
		}
		printf("\n");
	}
	}
	getch();
}