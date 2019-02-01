#include <stdio.h>
int main() 
{
   int num,k,i,j,b[50],flag=0;
   scanf("%d %d",&n,&k);
   for(i=0;i<num;i++)
   {
       scanf("%d ",&b[i]);
   }
   for(i=0;i<num;i++)
   {
       for(j=i+1;j<num;j++)
       {
           if((b[i]+b[j])==k)
           {
               printf("yes..%d and  %d sums up to give %d",b[i],b[j],k);
               flag=1;
               break;
           }
       }
   }
   if(flag!=1)
   {
       printf("no");
   }
	return 0;
}
