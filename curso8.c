#include <stdio.h>
int main(int argc, char const *argv[]) {
   // printf() displays the string inside quotation
   int serie[] ={1,9,11,40};
   printf("%d\n",serie[3]);
   printf("%d\n",serie[1]);
   int *four = serie + 3;
   printf("%p ->  %d\n",four,*four);
   int *five = serie + 2;
   printf("%p ->  %d\n",five,*five);
//    char *two = one + 1; 
//    printf("%p -> %c\n",two, *two);
   return 0;
}