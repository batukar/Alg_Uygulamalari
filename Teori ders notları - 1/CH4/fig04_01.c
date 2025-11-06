// fig04_01.c
// Counter-controlled iteration.
#include <stdio.h>

int main(void) {
   int counter = 1; // initialization

   while (counter <= 10) { // iteration condition
      printf("%d\n",counter);
      counter++; // increment
   }

   puts("");
}
