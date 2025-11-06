#include <stdio.h>
int x = 1; 
void Global(void);
int main(void) {
   int x = 5;
   printf("%d\n", x);
   {                                   
      int x = 7;         
      printf("%d\n", x); 
   }                                      
   printf("%d\n", x);
   Global();
}
void Global(void) {
   printf("%d\n", x);
   } 
   
   
   
