#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int main()
{
	long long int t,l;
	scanf("%lld",&t);
	for(l=1;l<=t;l++)
	{
	    char s[101];
	    int flag=0,i,j,k=0;
	    scanf("%s",&s);
	    for(i=0;s[i]!='\0';i++)
        {
            for(j=0;s[j]!='\0';j++)
            {
                if(i!=j)
                {
                    if(s[i]==s[j])
                    {
                        flag=1;
                        break;
                    }
                }
            }

        }
        if(flag==0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }

	}
	getch();
}
