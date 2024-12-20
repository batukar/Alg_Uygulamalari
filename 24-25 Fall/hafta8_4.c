#include <stdio.h>

int x = 0; // global değişken

int input(); // fonksiyon prototipi
int fact(int num); // fonksiyon prototipi

int main(){
    int num = input();
    printf("%d! = %d", num, fact(num));
}

int input(){
    printf("Sayi girin: \n");
    scanf("%d", &x);

    return x;
}

int fact(int num){
    int fakt = 1;

    for (int i = num; i >= 2; i--){
        fakt = fakt * i;
    }

    return fakt;    
}