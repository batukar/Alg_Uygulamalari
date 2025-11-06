// fig05_03.c
// Demonstrating the function-call stack 
// and stack frames using a function square.
#include <stdio.h>

int square(int x); // prototype for function square

int main() {
   int a = 5; // value to square (local variable in main)

   printf("%d'in karesi: %d\n", a, square(a)); // display a squared
} 

// returns the square of an integer
int square(int x) { // x is a local variable
   return x * x; // calculate square and return result
} 
