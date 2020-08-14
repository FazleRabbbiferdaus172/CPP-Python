#include<stdio.h>
#include<math.h>

int main()
{
	int t,l;

	scanf("%d",&t);
	for(l=0;l<t;l++){
	   int n,a,na=0,s,x,flag=0,indi=0;
	   scanf("%d",&n);
	   a=n;
	   long long int p=pow(n,3);
	   while(a!=0)
       {
           s=a%10;
           x=p%10;
           a=a/10;
           p=p/10;
           printf("%d \n",s);
           printf("%d \n",x);

           if(x==s)
           {
               flag++;
           }
           indi++;
           printf("%d %d\n",s,x);

       }

       if(flag==indi)
       {
           printf("1\n");
       }
       else
       {
           printf("0\n");
       }

       }
	return 0;
}
