#include <stdio.h>

int main() {
    int a, b, c, max, min;

    printf("İlk sayiyi girin: \n");
    scanf("%d", &a);
    printf("Ikinci sayiyi girin: \n");
    scanf("%d", &b);
    printf("Ucuncu sayiyi girin: \n");
    scanf("%d", &c);

    // en büyük
    if(a >= b && a >= c){
        max = a;
    }else if(b >= a && b >= c){
        max = b;
    }else{
        max = c;
    }

    // en küçük
    if(a <= b && a <= c){
        min = a;
    }else if(b <= a && b <= c){
        min = b;
    }else
        min = c;

    printf("En buyuk sayi = %d\n", max);
    printf("En kucuk sayi = %d\n", min);

    return 0;
}