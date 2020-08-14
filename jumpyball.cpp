#include<stdio.h>
#include<conio.h>

int main()
{
	int t,l;
	scanf("%d",&t);
	for(l=1;l<=t;l++)
	{
	long long int h,td=0,i;
	scanf("%lld",&h);
	for(i=h;i>0;i=i/2)
	{
		td=td+i*2;
	}
	printf("%lld\n",td);
	}
	getch();
}
