#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int size;
		scanf("%d",&size);
		int *a,*b;
		a=(int*)malloc(size*sizeof(int));
		b=(int*)malloc(size*sizeof(int));
		int counta=0,countb=0,j=0;
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[j]);

		}

		for(j=0;j<size;j++)
		{
			scanf("%d",&b[j]);

		}

		for(j=0;j<size;j++)
		{
			if(a[j]>b[j])
			{
				counta++;
			}
			else if(a[j]<b[j])
			{
				countb++;
			}
		}

		printf("%d ",counta);
		printf("%d ",countb);

		if(counta>countb)
		{
			printf("A \n");
		}

		else if(counta<countb)
		{
			printf("B \n");
		}

		else
		{
			printf("DRAW\n");
		}
	}

	getch();
}
