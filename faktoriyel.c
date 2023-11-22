#include <stdio.h>

int main(){
    int number;
    int factorial = 1;

    printf("Faktoriyel hesabini yapmak istediginiz sayiyi giriniz: ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++){
        factorial *= i;
    }

    printf("Faktoriyel sonucu = %d\n", factorial);

}