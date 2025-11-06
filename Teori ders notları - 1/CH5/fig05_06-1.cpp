// fig05_06.c
// Randomizing the die-rolling program.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
   //printf("%s", "Enter seed: ");
   //int seed = 0; // number used to seed the random-number generator
   //scanf("%d", &seed); 

   srand(time(NULL)); // seed the random-number generator
   int i;
   for (i = 1; i <= 5; ++i) {
      printf("%d  ", 10 + (rand() % 50)); // display random die value
   }
   puts("");     
} 
