// fig05_01.c
// Creating and using a function.
#include <stdio.h> 

int square(int number); // function prototype 
int square1(int number1); 

int main(void) {
   // loop 10 times and calculate and output square of x each time
int x; 
   for (x = 1; x <= 10; ++x) {
      printf("%d  ", square1(x)); // function call
   } 

   puts("");
   
   for (x = 1; x <= 15; ++x) {
      printf("%d  ", square(x)); // function call
   } 

   puts("");
} 
// square function definition returns the square of its parameter
int square(int number) { // number is a copy of the function's argument 
   return number*number; // returns square of number as an int        
}      
int square1(int number1) { // number is a copy of the function's argument 
   return number1*number1*number1; // returns square of number as an int        
}                                                                  
