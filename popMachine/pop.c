#include <stdio.h>
#include <stdlib.h>
#include "pop.h"

int main(int argc, char * argv[]) {

   if (priceIsRIght(argc, argv) == 1) {
      printf("Success!\n");
   } else {
      printf("Failure...\n");
   }
   
   return 0;
}