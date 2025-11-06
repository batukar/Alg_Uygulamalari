// fig05_01.c
// Creating and using a function.
#include <stdio.h> 

int square(int number); // function prototype 

int main(void) {
   // loop 10 times and calculate and output square of x each time
int x; 
   for (x = 1; x <= 15; ++x) {
      printf("%d  ", square(x)); // function call
   } 

   puts("");
   
   printf("%d  ", square(30));
   printf("%d  ", square(50));
} 
// square function definition returns the square of its parameter
int square(int number) { // number is a copy of the function's argument 
   return number*number; // returns square of number as an int        
}      
                                                                
