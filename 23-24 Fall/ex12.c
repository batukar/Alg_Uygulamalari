// faktoriyel rekürsif

#include <stdio.h>

int number = 0;

int input(){ // kullanici girisleri icin gerekli fonksiyon
    printf("Sayi girin: \n");
    scanf("%d", &number);
    return number;
}

int faktoriyel(int number){
    if(number == 0 || number == 1){
        return 1;
    }else
        return number * faktoriyel(number - 1);
}

// number = 3 ==>
// fakt(3) ==>
// fakt(3) = 3 * fakt(2)            ===> fakt(3) = 3*2= 6
// number = 2 ==>
// fakt(2) = 2 * fakt(1)            ===> fakt(2) = 2*1 =2
// number = 1 ==>
// fakt(1) = 1

int main(){
    int fact_num = input();

    printf("Sonuç = %d\n", faktoriyel(fact_num));

}