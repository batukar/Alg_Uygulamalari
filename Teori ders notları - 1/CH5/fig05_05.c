// fig05_05.c
// Rolling a six-sided die 60,000,000 times.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   int frequency1 = 0; // rolled 1 counter
   int frequency2 = 0; // rolled 2 counter
   int frequency3 = 0; // rolled 3 counter
   int frequency4 = 0; // rolled 4 counter
   int frequency5 = 0; // rolled 5 counter
   int frequency6 = 0; // rolled 6 counter
   // loop 60000000 times and summarize results
  srand(time(NULL));   
   int roll;
   for (roll = 1; roll <= 60000000; ++roll) {
      int face = 1 + rand() % 6; // random number from 1 to 6

      // determine face value and increment appropriate counter
      switch (face) {
         case 1: // rolled 1
            ++frequency1;
            break;
         case 2: // rolled 2
            ++frequency2;
            break;
         case 3: // rolled 3
            ++frequency3;
            break;
         case 4: // rolled 4
            ++frequency4;
            break;
         case 5: // rolled 5
            ++frequency5;
            break;
         case 6: // rolled 6
            ++frequency6;
            break; // optional
      } 
   } 
   
   // display results in tabular format
   printf("%s%13s\n", "Face", "Frequency");
   printf("   1%13d\n", frequency1);
   printf("   2%13d\n", frequency2);
   printf("   3%13d\n", frequency3);
   printf("   4%13d\n", frequency4);
   printf("   5%13d\n", frequency5);
   printf("   6%13d\n", frequency6);
} 
