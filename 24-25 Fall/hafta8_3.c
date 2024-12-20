#include <stdio.h>

int x = 0; //global değişken
int sonuc = 0; // global değişken

int input(); // fonksiyon prototipi
int avr(int num1, int num2); // fonksiyon prototipi

int main(){
    int a, b;
    a = input();
    b = input();
    sonuc = avr(a, b);

    printf("%d ve %d sayilarinin aritmetik ortalamasi = %d\n", a, b, sonuc);
}

int input(){
    printf("Sayi girin: \n");
    scanf("%d", &x);

    return x;
}

int avr(int num1, int num2){
    return sonuc = (num1 + num2) / 2;
}