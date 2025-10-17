#include <stdio.h>

int main(){
    int a, b, c, max, min;
   
    printf("Birinci sayiyi girin: \n");
    scanf("%d", &a);
    printf("Ikinci sayiyi girin: \n");
    scanf("%d", &b);
    printf("Ucuncu sayiyi girin: \n");
    scanf("%d", &c);

    if(a >= b && a >= c){
        max = a;
        if(b >= c){
            min = c;
        }else{
            min = b;
        }
    }else if(b >= a && b >= c){
        max = b;
        if(a >= c){
            min = c;
        }else{
            min = a;
        }
    }else{
        max = c;
        if(a >= b){
            min = b;
        }else{
            min = a;
        }
    }
    printf("En buyuk sayi: %d\n", max);
    printf("En kucuk sayi: %d\n", min);
}