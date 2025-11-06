// fig05_09.c
// Recursive factorial function.
#include <stdio.h>

unsigned long long int factorial(int number); 

int main(void) {
   // calculate factorial(i) and display result
   int i;
   for (i = 0; i <= 100; ++i) {
      printf("%d! = %llu\n", i, factorial(i));
   } 
} 

// recursive definition of function factorial  
unsigned long long int factorial(int number) { 
 if (number <= 1) { // base case             
    return 1;                                
 }                                           
 else { // recursive step                    
      return (number * factorial(number - 1)); 
   }                                           
}                                              
