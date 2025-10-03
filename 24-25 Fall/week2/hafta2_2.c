#include <stdio.h>

int main(){

     // Derste yaptigimiz bir calisma

     int num;

     printf("Sayi girin: ");
     scanf("%d", &num);
     printf("Girilen sayi: %d\n", num);


     if(num % 2 != 0){
          printf("Sayi tektir");
     }else{
          printf("Sayi cifttir");
     }
     



}