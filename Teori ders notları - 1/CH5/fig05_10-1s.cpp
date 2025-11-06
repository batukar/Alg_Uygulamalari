#include <stdio.h>
unsigned long long int f(int n);
int main(void) {
   int x;
   for (x = 0; x <= 10; x++) {
      printf("F(%d) = %llu\n", x, f(x));
   }
}          
unsigned long long int f(int n) {         
   if (0 == n && 1 == n && 2 == n) {           
      return 1;                                   
   }                                              
   else {                        
      return (f(n - 1) + f(n - 2)) * f(n - 3); 
   }                                              
}     

                                            
