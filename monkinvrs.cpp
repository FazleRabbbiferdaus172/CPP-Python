#include<stdio.h>
int main()
{
    int t,l;
    scanf("%d",&t);
    for(l=0;l<t;l++)
    {
        int n,i,j;
        scanf("%d",&n);

        int a[21][21],x,y,count=0;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                for(x=i;x<n;x++)
                {
                    for(y=j;y<n;y++)
                    {
                        if(a[i][j]>a[x][y])
                        {
                            count++;

                        }
                    }
                }

            }

        }
        printf("%d\n",count);



    }


    return 0;
}
