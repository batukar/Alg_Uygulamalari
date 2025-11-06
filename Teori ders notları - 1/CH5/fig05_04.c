// fig05_04.c
// Shifted, scaled random integers produced by 1 + rand() % 6.
#include <stdio.h>
#include <stdlib.h>
//#include <time.h> 
int main(void) {
//srand(2);
//srand(time(NULL)); 
   int i;
   for (i = 1; i <= 10; ++i) { // loop 10 times
      printf("%d  ", 1 + (rand() % 6)); // display random die value
   } 

   puts("");
} 
