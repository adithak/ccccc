#include <stdio.h> 
  
int main() 
{ 
    int abb,bcc; 
    printf("Enter Value of a "); 
    scanf("%d", &abb); 
    printf("\nEnter Value of b "); 
    scanf("%d", &bcc); 
  
    int temp = abb; 
    abb=bcc; 
    bcc= temp; 
  
    printf("\nAfter Swapping: abb = %d,bcc = %d",abb,bcc); 
    return 0; 
}
