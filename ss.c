#include <stdio.h>

int main()
{
   char str[1000], ch;
   int j, f = 0;

   printf("Enter a string: ");
   gets(str);

   printf("Enter a character to find the frequency: ");
   scanf("%c",&ch);

   for(j = 0; str[j] != '\0'; ++j)
   {
       if(ch == str[i])
           ++f;
   }

   printf("Frequency of %c = %d", ch, f);

   return 0;
}
