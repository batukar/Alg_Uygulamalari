// fig04_03.c  
// Summation with for.
#include <stdio.h>

int main(void) {
   int sum = 0; // initialize sum
   int number;
   for (number = 0; number <= 10; number += 2) {
   	printf("%d\n", number);
      sum += number; // add number to sum                     
   }
	puts(" Sum ");
   printf("Sum is %d\n", sum);
}
