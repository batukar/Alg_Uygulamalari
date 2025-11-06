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
if (number1 > 100||number1 < 0) {                          
      printf("Gecersiz not araligi\n");
   } // end if 
//else if (number1 < 0) {                          
//      printf("Gecersiz not araligi\n");
//   } // end if 
else if (number1 >= 90) {                          
      printf("AA\n");
   } // end if 
         
else if (number1 >= 80) {                          
      printf("BA\n");
     // return 0;   
}
	  
else if (number1 >= 70) {                          
      printf("BB\n");
   }

else if (number1 >= 60) {                          
      printf("CB\n");
   }
	  
else if (number1 >= 50) {                          
      printf("CC\n");
          
	               }
      else{
	  printf("FF\n");
	  }
	  
             
} // end function main
