#include <stdio.h>

int x = 0; // global değişken

int input(); // fonksiyon prototipi

int main(){
    int num1 = input();
    int num2 = input();

    x = 5;

    printf("Girilen sayi = %d\n", num1);
    printf("Girilen sayi = %d\n", num2);
}

int input(){
    printf("Sayi girin: \n");
    scanf("%d", &x);

    return x;
}

