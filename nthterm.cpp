#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	long long int t,l;
	scanf("%lld",&t);
	for(l=1;l<=t;l++)
	{
	    long long int n,ans;
	    scanf("%lld",&n);
	    ans=(n*(n+1))/2;
	    printf("%lld\n",ans);

	}
	getch();
}
