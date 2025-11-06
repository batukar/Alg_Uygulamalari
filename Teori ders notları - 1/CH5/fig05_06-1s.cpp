#include <stdio.h>
#include <stdlib.h>
int main(void) {

   int i;
   for (i = 1; i <= 5; ++i) {
      printf("%d  ", 10 + (rand() % 50));
   }
   puts("");     
} 


