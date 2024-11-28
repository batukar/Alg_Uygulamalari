#include <stdio.h>

int main(){
    int num = 6489;
    int birler, onlar, yuzler, binler, temp;
    birler = num % 10;
    onlar = (num / 10) % 10;
    yuzler = (num / 100) % 10;
    binler = (num / 1000) % 10;

    printf("Sayi: %d\n", num);
    printf("Birler Basamagi: %d\n", birler);
    printf("Onlar Basamagi: %d\n", onlar);
    printf("Yuzler Basamagi: %d\n", yuzler);
    printf("Binler Basamagi: %d\n", binler);
    printf("************************************\n");

    temp = birler;
    birler = binler;
    binler = temp;

    printf("Yeni Birler Basamagi: %d\n", birler);
    printf("Yeni Binler Basamagi: %d\n", binler);
    printf("************************************\n");

    temp = yuzler;
    yuzler = onlar;
    onlar = temp;
    
    printf("Yeni Onlar Basamagi: %d\n", onlar);
    printf("Yeni Yuzler Basamagi: %d\n", yuzler);
    printf("************************************\n");

    onlar = onlar * 10;
    yuzler = yuzler * 100;
    binler = binler * 1000;

    binler = binler + yuzler + onlar + birler;

    printf("Eski sayi: %d\n", num);
    printf("Yeni sayi: %d\n", binler);
    
    
}