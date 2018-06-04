int priceIsRight(int numCmdArgs, char * cmdPrice[]) {

   int popPrice;
   int success = 0;
   
   if (numCmdArgs != VALIDARG) {
      printf("Please specify selling price as a command line argument.\n");
	  printf("Usage: pop [price]\n");
   } else {
      popPrice = atoi(cmdPrice[1]);
	  
	  if (popPrice % MULTIPLE != 0) {
	     printf("Price must be a multiple of %d.\n", MULTIPLE);
	  } else if (popPrice < MINPRICE || popPrice > MAXPRICE) {
	     printf("Price must be from %d to %d centimes inclusive.\n", MINPRICE, MAXPRICE);
	  } else {
	     success = 1;
	  }
   }
   
   return success;
}