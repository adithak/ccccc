#include<stdio.h>
void main()
{
	int km;
	int i,num=1,rem,base,bin,b;

	scanf("%d",&km);
	for(i=0;i<km;i++)
	{
		num=num*2;
	}
	
	for(i=0;i<num;i++)
	{
		b=i;
		rem=0,base=1,bin=0;
		while(b!=0)
		{
			rem=b%2;
			bin=bin+rem*base;
			base=base*10;
			b=b/2;
		}
		printf("%d \n",bin);
	}
}
