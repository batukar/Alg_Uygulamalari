// fig05_10.c
// Recursive fibonacci function.
#include <stdio.h>

unsigned long long int fibonacci(int n); // function prototype
int main(void) {
   // calculate and display fibonacci(number) for 0-10
   int number;
   for (number = 0; number <= 20; number++) {
      printf("Fibonacci(%d) = %llu\n", number, fibonacci(number));
   }

   printf("Fibonacci(20) = %llu\n", fibonacci(20));
   printf("Fibonacci(30) = %llu\n", fibonacci(30));
   printf("Fibonacci(40) = %llu\n", fibonacci(40));
} 

// Recursive definition of function fibonacci              
unsigned long long int fibonacci(int n) {         
   if (0 == n || 1 == n || 2 == n) { // base case           
      return n;                                   
   }                                              
   else { // recursive step                       
      return fibonacci(n - 1) + fibonacci(n - 2) + fibonacci(n - 3); 
   }                                              
}                                                 
