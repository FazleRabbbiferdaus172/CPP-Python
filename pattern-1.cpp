#include<stdio.h>
#include<conio.h>
int main()
{
	int t,l;
	scanf("%d",&t);
	for(l=1;l<=t;l++){
	char c='A';
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n)
			{
				printf("%c",c);
				c++;
			}
			else
			{
				if(j==1||j==n)
				{
					printf("%c",c);
					c++;
				}
				else
				{
					printf("$");
				}
			}
		}
		printf("\n");
	}}
	getch();
}