// faktoriyel

#include <stdio.h>

int number = 0;

int input(){ // kullanici girisleri icin gerekli fonksiyon
    printf("Sayi girin: \n");
    scanf("%d", &number);
    return number;
}

int faktoriyel(int number){
    int result = 1;

    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }
    
    return result;
}

int main(){
    int fact_num = input();

    printf("Sonuç = %d\n", faktoriyel(fact_num));

}