// usAlma rekürsif

#include <stdio.h>

int number = 0;

int input(){ // kullanici girisleri icin gerekli fonksiyon
    printf("Sayi girin: \n");
    scanf("%d", &number);
    return number;
}

// özyinelemeli (Reskürsif)
int usAlma(int taban, int us){ 
    if(us == 0){
        return 1;
    }else
        return taban * usAlma(taban, us-1);
}

// taban = 2, us = 3 ==>
// usAlma(2,3) = 2 * usAlma(2,2)            ==> usAlma(2,3) = 2*4 = 8
// taban = 2, us = 2 ==>
// usAlma(2,2) = 2 * usAlma(2,1)            ==> usAlma(2,2) = 2*2 = 4
// taban = 2, us = 1 ==>
// usAlma(2,1) = 2 * usAlma(2,0)            ==> usAlma(2,1) = 2*1  = 2
// taban = 2, us = 0 ==>
// usAlma(2,0) = 1

int main(){
    int taban = input();
    int us = input();

    printf("Sonuç = %d\n", usAlma(taban, us));

}