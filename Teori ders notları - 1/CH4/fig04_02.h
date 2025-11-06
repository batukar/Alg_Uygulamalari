// fig04_02.c
// Counter-controlled iteration with the for statement.
#include <stdio.h>

int main() {
   // initialization, iteration condition, and increment 
   // are all included in the for statement header.
   for (int counter = 1; counter <= 5; ++counter) {
      printf("%d  ", counter);
   }

   puts(""); // outputs a newline
}
