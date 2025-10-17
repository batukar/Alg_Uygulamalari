#include <stdio.h>

int main(){
   int a, b;
   
   printf("Birinci sayiyi girin: \n");
   scanf("%d", &a);
   printf("Ikinci sayiyi girin: \n");
   scanf("%d", &b);

   if(a > b){
        printf("%d sayiyi %d sayisinden buyuktur.\n", a, b);
   }else if(a < b){
        printf("%d sayisi %d sayisindan kucuktur.\n", a, b);
   }else{
        printf("Girilen iki sayi birbirine esittir.\n");
   }
   
   return 0;
}