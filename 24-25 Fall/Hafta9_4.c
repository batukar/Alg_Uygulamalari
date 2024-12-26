#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x = 0; //global değişken

// prototipler
int input();
int rastgeleSayiUret(int a, int b);

int main(){
    srand(time(NULL));

    int altSinir = input();
    int ustSinir = input();

    int maks = (ustSinir > altSinir) ? ustSinir : altSinir;
    int min = (ustSinir < altSinir) ? ustSinir : altSinir;
    rastgeleSayiUret(min, maks);


}

int input(){
    printf("Sayi girin: \n");
    scanf("%d", &x);

    return x;
}

int rastgeleSayiUret(int a, int b){
    // int random1 = a;
    // int random2 = b;

    printf("%d ile %d arasindaki sayiniz = %d\n", a, b, a + rand() % (b - a + 1));
}
