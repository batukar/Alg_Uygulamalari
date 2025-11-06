// fig05_02.c
// Finding the maximum of three integers.
#include <stdio.h>
#include <locale.h>
int maximum(int x, int y, int z); // function prototype

int main(void) {
   int number1 = 0; // first integer entered by the user
   int number2 = 0; // second integer entered by the user
   int number3 = 0; // third integer entered by the user
   setlocale(LC_ALL, "Turkish");
   printf("3 tane tamsayý giriniz arkadaþlar:");
   scanf("%d%d%d", &number1, &number2, &number3);
   
   // number1, number2 and number3 are arguments 
   // to the maximum function call
   printf("Maximum sayý: %d\n", maximum(number1, number2, number3));
} 

// Function maximum definition
int maximum(int x, int y, int z) {            
   int max = x; // assume x is largest        
                                              
   if (y > max) { // if y is larger than max, 
      max = y; // assign y to max             
   }                                          
                                              
   if (z > max) { // if z is larger than max, 
      max = z; // assign z to max             
   }                                          
                                              
   return max; // max is largest value        
}                                             
