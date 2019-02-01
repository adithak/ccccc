#include<stdio.h>
void main()
{
  int num,i,abb[50],count=1, b[10],temp,j;
scanf("%d",&n);
for(i=0;i<num;i++)
{
  scanf("%d",&abb[i]);
}
for(i=0;i<num;i++)
{
  if(abb[i]<abb[i+1] && abb[i]!=abb[i+1])
  {
    b[i]=++count;
  }
  else if(abb[i]==abb[i+1])
  {
    b[i]=0;
  }
  else
  {
  count=1;
  b[i]=0;
  }
}
for(i=0;i<num-1;i++)
{
  printf("%d\t",b[i]);
}
for(i=0;i<num-1;i++)
{
  for(j=i+1;j<num-1;j++)
  {
  if(b[i]<=b[j])
    {
    temp=b[i];
    b[i]=b[j];
    b[j]=temp;
    }
  } 
  
}
printf("\n %d",b[0]);   
}
