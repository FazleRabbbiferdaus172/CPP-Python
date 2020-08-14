#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	long long int t,l;
	scanf("%lld",&t);
	for(l=1;l<=t;l++)
	{
	    char s1[1001],s2[1001],c;
	    int i,j,w=0,w1=0,tw=0,tw1=0;
	    scanf("%s",s1);
	    scanf("%s",s2);
	    for(i=0;s1[i]!='\0';i++)
        {
            w=0;
            for(c='a';c<=s1[i];c++)
            {
                w++;
            }

            tw=tw+w;

        }


        for(i=0;s2[i]!='\0';i++)
        {
            w1=0;
            for(c='a';c<=s2[i];c++)
            {
                w1++;
            }

            tw1=tw1+w1;

        }


        if(tw>tw1)
        {
            printf("1\n");
        }
        else if(tw<tw1)
        {
            printf("2\n");
        }
        else if(tw==tw1)
        {
            printf("equal\n");
        }

	}
	getch();
}
