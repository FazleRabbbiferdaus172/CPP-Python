#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	long long int t,l;
	scanf("%lld",&t);
	for(l=1;l<=t;l++)
	{
	long long int i,sum=0,n;
	scanf("%lld",&n);
	for(i=1;i<=n*2-1;i=i+2)
    {
        sum=sum+pow(i,2);
    }
	printf("%lld\n",sum);
	}
	getch();
}
