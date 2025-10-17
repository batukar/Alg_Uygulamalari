#include <stdio.h>

int main(){
    int a, b, c, max;
   
    printf("Birinci sayiyi girin: \n");
    scanf("%d", &a);
    printf("Ikinci sayiyi girin: \n");
    scanf("%d", &b);
    printf("Ucuncu sayiyi girin: \n");
    scanf("%d", &c);

    printf("En buyuk sayi: \n");

    if(a >= b && a >= c){
        max = a;
    }else if(b >= a && b >= c){
        max = b;
    }else{
        max = c;
    }

    printf("%d", max);
}