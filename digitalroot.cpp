#include<stdio.h>
#include<conio.h>

int main()
{
	long long int t,l;
	scanf("%lld",&t);
	for(l=0;l<t;l++){
	long long int a;
	int sum,d,i,flag=0;
	scanf("%lld",&a);
	while(a!=0)
    {
        sum=0;
        while(a!=0)
        {
            d=a%10;
            sum=sum+d;
            a=a/10;
        }
        if(sum>9)
        {
            a=sum;
            sum=0;
        }
    }
    printf("%d",sum);
    if(sum==1)
    {
        printf("0");
    }
    else{
    for(i=2;i<=sum/2;i++)
    {
        if(sum%i==0)
        {
            flag=1;
            printf("0");
            break;
        }
    }
    if(flag==0)
    {
        printf("1");
    }}

		printf("\n");
	}
	getch();
}
