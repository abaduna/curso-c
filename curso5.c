#include <stdio.h>
int main(int argc, char const *argv[]) {
   // printf() displays the string inside quotation
   int number[] =  {20,40,190,15,10};
   

   int counbt = sizeof(number)/sizeof(int);

   for(int i = 0; i < counbt; i++)
   {
    printf("el valor de %d %d\n",i,number[i]);
   }
   int set=20;
   int stop = 0;
   while (stop < set)
   {
    stop++;
    printf("perdon %d %d\n",set,stop);
   }
   
   return 0;
}