// fig04_02.c
// Counter-controlled iteration with the for statement.
#include <stdio.h>

int main() {
   // initialization, iteration condition, and increment 
   // are all included in the for statement header.
   int counter;
   for (counter = 0; counter <= 10; counter+=2) {
      printf("%d\n",counter);
   }
   puts(""); // outputs a newline
}
