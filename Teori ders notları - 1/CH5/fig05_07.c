// fig05_07.c
// Simulating the game of craps.
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contains prototype for function time

enum Durum {CONTINUE, WON, LOST}; // constants represent game status

int rollDice(void); // rollDice function prototype 

int main(void) {
   srand(time(NULL)); // randomize based on current time

   int myPoint = 0; // player must make this point to win
   enum Durum oyunDurumu = CONTINUE; // may be CONTINUE, WON, or LOST
   int sum = rollDice(); // first roll of the dice

   // determine game status based on sum of dice
   switch(sum) {
      // win on first roll
      case 7: // 7 is a winner
      case 11: // 11 is a winner          
         oyunDurumu = WON; 
         break;
      // lose on first roll
      case 2: // 2 is a loser
      case 3: // 3 is a loser
      case 12: // 12 is a loser
         oyunDurumu = LOST; 
         break;
      // remember point
      default:                  
         oyunDurumu = CONTINUE; // player should keep rolling
         myPoint = sum; // remember the point
         printf("Point is %d\n", myPoint);
         break; // optional
   }

   // while game not complete
   while (CONTINUE == oyunDurumu) { // player should keep rolling
      sum = rollDice(); // roll dice again

      // determine game status
      if (sum == myPoint) { // win by making point
         oyunDurumu = WON; 
      } 
      else if (7 == sum) { // lose by rolling 7
         oyunDurumu = LOST; 
      } 
   } 

   // display won or lost message
   if (WON == oyunDurumu) { // did player win?
      puts("Player wins");
   } 
   else { // player lost
      puts("Player loses");
   } 
} 

// roll dice, calculate sum and display results
int rollDice(void) {
   int die1 = 1 + (rand() % 6); // pick random die1 value
   int die2 = 1 + (rand() % 6); // pick random die2 value

   // display results of this roll
   printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
   return die1 + die2; // return sum of dice
} 
