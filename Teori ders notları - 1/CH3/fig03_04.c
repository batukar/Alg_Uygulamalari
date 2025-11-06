// fig03_04.c
// Class-average program with sentinel-controlled iteration.
#include <stdio.h>

// function main begins program execution
int main(void) {
   // initialization phase
   int total = 0; // initialize total
   int counter = 0; // initialize loop counter

   // processing phase
   // get first grade from user
   printf("%s", "Bir not giriniz, Not girisini tamamlamak icin -1 giriniz: "); // prompt for input
   int grade = 0; // grade value
   scanf("%d", &grade); // read grade from user                 

   // loop while sentinel value not yet read from user
   while (grade != -1) {
      total = total + grade; // add grade to total
      counter = counter + 1; // increment counter

      // get next grade from user
      printf("%s", "Bir not giriniz, Not girisini tamamlamak icin -1 giriniz: "); // prompt for input
      scanf("%d", &grade); // read next grade                  
   } // end while

   // termination phase
   // if user entered at least one grade
   if (counter != 0) {

      // calculate average of all grades entered
      double average = (double) total / counter; // avoid truncation

      // display average with two digits of precision
      printf("Sinif ortalamasi: %.4f\n", average);
   } // end if   
   else { // if no grades were entered, output message
   	  puts("  ");
      puts("Hicbir not girilmedi");
   } // end else
} // end function main
