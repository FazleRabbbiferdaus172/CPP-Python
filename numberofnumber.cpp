#include<stdio.h>
#include<math.h>

int main()
{
	int t,l;

	scanf("%d",&t);
	for(l=0;l<t;l++)
    {
        int n;
        scanf("%d",&n);
        int a[n],i,mod,k,c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&k);
        for(i=0;i<n;i++)
        {
           mod=a[i];
           while(mod>=10)
           {
               if(mod%10==k)
               {
                   c++;
               }
               mod=mod/10;
           }
           if(mod==k)
           {
               c++;
           }
        }
        printf("%d \n",c);


       }
	return 0;
}
