// fig04_05.c
// Counting letter grades with switch.
#include <stdio.h>

int main(void) {
   int aCount = 0;
   int bCount = 0; 
   int cCount = 0; 
   int dCount = 0; 
   int fCount = 0; 

   puts("Bir harf notu giriniz");
   puts("Bitirmek için EOF karakterini giriniz: ctrl+z ");
   int grade = 0; // one grade 

   while ((grade = getchar()) != EOF) {
      switch (grade) { 
         case 'A': 
         case 'a': 
            ++aCount; 
            break; 
         case 'B': 
         case 'b': 
            ++bCount;  
			 break; 
            default: 
            printf("%s", "Hatali harf notu girdiniz"); 
      } 
   } 
   puts("\nTotals for each letter grade are:");
   printf("A: %d\n", aCount);
   printf("B: %d\n", bCount); 
}
