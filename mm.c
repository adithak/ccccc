#include<stdio.h>
void main()
{
  int nm,wh,i,weight[10],count=1, value[10],temp,j,k=0,l=0,sw=0,sv=0,p;
scanf("%d \t %d",&nm,&wh);
for(i=0;i<nm;i++)
{
  scanf("%d \t",&weight[i]);
}
for(i=0;i<nm;i++)
{
  scanf("%d",&value[i]);
}
printf("\n");
for(i=0;i<nm;i++)
{
  printf("%d \t",weight[i]);
}
printf("\n");
for(i=0;i<nm;i++)
{
  printf("%d \t",value[i]);
}
i=0;
if(weight[i]>w)
{
  printf("\n0");
}
else
{
while(sw<=w)
  {
    if(weight[i]<=wh)
    {
      sw=sw+weight[i];
      sv=sv+value[i];
      i++;
    }
  }
  p=i;
  sw=sw-weight[p-1];
  sv=sv-value[p-1];
  printf("\n %d",sv);
}
  
}
