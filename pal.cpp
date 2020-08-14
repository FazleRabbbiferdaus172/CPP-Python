#include<stdio.h>
#include<string.h>
int main()
{
 int t,s;
 scanf("%d",&t);
 int c;
 do{
    c = getchar();
}while(c != EOF && c != '\n');
 for(s=0;s<t;s++)
 {
     char a[1000];
     gets(a);
     int ln=strlen(a),i,count=0;
     int j=ln-1;
     for(i=0;i<ln;i++)
     {
         if(a[i]==a[j])
         {
             count++;
         }
         j--;
     }
     if(count==ln)
     {
         if(ln%2==0)
         {
             printf("YES EVEN\n");
         }
         else
         {
             printf("YES ODD\n");
         }
     }
     else
     {
         printf("No\n");
     }

 }
 return 0;
}
