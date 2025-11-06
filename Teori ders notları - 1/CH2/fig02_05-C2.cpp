// fig02_05.c
// Using if statements, relational 
// operators, and equality operators.
#include <stdio.h>

// function main begins program execution
int main(void) {
   printf("Bir not giriniz/n");

   int number1 = 0; // first number to be read from user
 
   
   printf("not=");
   scanf("%d", &number1);
   
   if (number1 > 100) {                          
      printf("Hatali giris");
      
      return 0;
   } // end if                                        

   if (number1 >=80) {
      printf("AA");
      
      return 0;
   } // end if

   if (number1 >= 70) {
      printf("BA");
      
      return 0;
   } // end if

   if (number1 >=60) {
      printf("BB");
      
      return 0;
   } // end if

   if (number1 <0 ) {                          
      printf("Hatali giris");
      
      return 0;
   }
   if (number1 <60) {
      printf("FF");
      
      return 0;
   }
   
   } // end if

 // end function main
