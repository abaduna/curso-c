#include <stdio.h>


int biger(int numneroa, int numerob)
{
    int resultado;
    if (numneroa > numerob)
    {
        resultado = numneroa;
    }else{
          resultado = numerob;
    }
    return resultado;
}


int main(int argc, char const *argv[]) {
   // printf() displays the string inside quotation


   int max = biger(86,86);
   printf("numero maximo es %d",max);
   return 0;
}