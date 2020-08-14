#include<stdio.h>
#include<math.h>

int main()
{
	int t,l,arr[1001],n,i,leftsum,rightsum;
	long long int pro;

	scanf("%d",&t);
	for(l=0;l<t;l++){
            pro=0;
            leftsum=0;
            rightsum=0;

            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
            }

            for(i=0;i<n/2;i++)
            {
                leftsum=leftsum+arr[i];

            }

            for(i=n/2;i<n;i++)
            {
                rightsum=rightsum+arr[i];

            }

            pro=leftsum*rightsum;
            printf("%lld \n",pro);


       }
	return 0;
}
