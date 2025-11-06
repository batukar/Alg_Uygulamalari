// fig02_05.c
// Using if statements, relational 
// operators, and equality operators.
#include <stdio.h>

// function main begins program execution
int main(void) {
   printf("Not Giriniz:\n");
   int number1 = 0; // first number to be read from user
  
   printf("Not= ");
   scanf("%d", &number1);
if (number1 > 100) {                          
      printf("Gecersiz not araligi\n");
      return 0;
   } // end if 
if (number1 < 0) {                          
      printf("Gecersiz not araligi\n");
      return 0;
   } // end if 


   if (number1 >= 90) {                          
      printf("AA\n");
      return 0;
   } // end if 
         
      if (number1 >= 80) {                          
      printf("BA\n");
      return 0;   
}
	  
	  if (number1 >= 70) {                          
      printf("BB\n");
      return 0;
  }
	  
	     if (number1 >= 60) {                          
      printf("CB\n");
      return 0;
  }
	  
	     if (number1 >= 50) {                          
      printf("CC\n");
      return 0;           
	               }
      printf("FF\n");
      return 0;             
} // end function main
