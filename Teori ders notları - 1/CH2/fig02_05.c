// fig02_05.c
// Using if statements, relational 
// operators, and equality operators.
#include <stdio.h>

// function main begins program execution
int main(void) {
   printf("Iki sayi giriniz aralarindaki iliskiyi bulalim\n");
   printf("\n");

   int number1 = 0; // first number to be read from user
   int number2 = 0; // second number to be read from user
   
   printf("ilk sayi=");
   scanf("%d", &number1);
   printf("ikinci sayi=");
   scanf("%d", &number2);
   
   if (number1 = number2) {                          
      printf("%d sayisi %d sayisine esittir\n", number1, number2);
   } // end if                                        

   if (number1 != number2) {
      printf("%d is not equal to %d\n", number1, number2);
   } // end if

   if (number1 < number2) {
      printf("%d is less than %d\n", number1, number2 );
   } // end if

   if (number1 > number2) {
      printf("%d is greater than %d\n", number1, number2);
   } // end if

   if (number1 <= number2) {
      printf("%d is less than or equal to %d\n", number1, number2);
   } // end if

   if (number1 >= number2) {
      printf("%d is greater than or equal to %d\n", number1, number2);
   } // end if
} // end function main
