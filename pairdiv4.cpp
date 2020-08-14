#include<stdio.h>
#include<math.h>

int main()
{
	int t,l;
	scanf("%d",&t);
	int n,a[1001],i,j;
	for(l=0;l<t;l++){
            int count=0;
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }

            for(i=0;i<n-1;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if((a[i]+a[j])%4==0)
                    {
                        count++;
                    }
                }
            }
            printf("%d \n",count);
       }
	return 0;
}

