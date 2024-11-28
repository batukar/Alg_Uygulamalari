#include <stdio.h>

int main(){
    int num;
    int fact = 1;

    printf("Hangi sayini faktoriyelini hesaplayalım?: \n");
    scanf("%d", &num);

    for ( num ; num >= 2 ; num--){  // num'dan başlat, num >= 2 olana kadar devam et, döngü çıkışında 1 azalt
        fact *= num; // fact = fact * num;
    }
    
    printf("%d Girilen sayinin faktoriyeli = %d\n", num, fact);
    
}