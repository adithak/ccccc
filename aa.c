#include <stdio.h>
#include <string.h>
int main(int arg, char *argv[])
{
 size_t maxlen = 0, leng;
 int j;
 int longest;
 for (j = 1; j < arg; j++) 
  {
  len = strlen(argv[j]);
  if (leng>maxlen) 
  longest = argv[j];
 }
printf("longest string is %s. \n", longest);
return 0;
}
