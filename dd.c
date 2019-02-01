#include <stdio.h>
int main() {
	int num,b[200],i,j;
	int arr[100],count=0;
    scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	scanf("%d",&arr[i]);
	arr[i]=1;
	}
	for(i=1;i<num;i++)
	{
	    if(arr[i]>arr[i-1])
	   arr[i]=arr[i-1]+1;
	}
	for(i=0;i<num;i++)
	count=count+arr[i];
	printf("%d",count);
	return 0;
}
