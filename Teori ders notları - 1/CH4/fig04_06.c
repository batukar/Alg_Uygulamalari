// fig04_06.c
// Using the do...while iteration statement.
#include <stdio.h>

int main(void) {
   int counter = 0; // initialize counter

   do {
      printf("%d\n", counter);
   } while (++counter <= 5);
}
