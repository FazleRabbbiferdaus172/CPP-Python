#include<stdio.h>
#include<math.h>

int main()
{
	int t,l;

	scanf("%d",&t);
	for(l=0;l<t;l++){
	   int n;
	   long long int sum=0,i;
	   scanf("%d",&n);
	   for(i=1;i<=n;i++)
       {
           sum=sum+i*i*i*i*i;
       }
       printf("%lld \n",sum);
       }
	return 0;
}
