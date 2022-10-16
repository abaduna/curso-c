#include <stdio.h>
int main(int argc, char const *argv[]) {
   // printf() displays the string inside quotation
  
   char *one= "uno";


   printf("%p -> %c\n",one, *one);
   char *two = one + 1; 
   printf("%p -> %c\n",two, *two);
   return 0;
}