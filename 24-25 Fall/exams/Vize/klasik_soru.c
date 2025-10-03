#include <stdio.h>

int main(){
    int num = 987;
    int birler, onlar, yuzler, temp;
    birler = num % 10;
    onlar = (num / 10) % 10;
    yuzler = (num / 100) % 10;

    printf("Sayi: %d\n", num);
    printf("Birler Basamagi: %d\n", birler);
    printf("Onlar Basamagi: %d\n", onlar);
    printf("Yuzler Basamagi: %d\n", yuzler);
    printf("************************************\n");

    temp = birler;
    birler = yuzler;
    yuzler = temp;

    printf("Yeni Birler Basamagi: %d\n", birler);
    printf("Yeni Yuzler Basamagi: %d\n", yuzler);
    printf("************************************\n");

    onlar /= 4;

    printf("Yeni Onlar Basamagi: %d\n", onlar);
    printf("************************************\n");

    onlar = onlar * 10;
    yuzler = yuzler * 100;

    int newNum =  yuzler + onlar + birler;

    printf("Eski sayi: %d\n", num);
    printf("Yeni sayi: %d\n", newNum);
    printf("************************************\n");

    printf("Aradaki fark = %d\n", num - newNum);
    printf("************************************\n");

    if(newNum %2 == 0){
        printf("Cifttir.\n");
    }else
        printf("Tektir.\n");

    return 0;
}