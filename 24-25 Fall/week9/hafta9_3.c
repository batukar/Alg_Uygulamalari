#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x = 0; //global değişken

// prototipler
int input();
int rastgeleSayiUret();
int nAdetRandom(int n);

int main(){
    srand(time(NULL));

    int userInput = input();    
    nAdetRandom(userInput);
}

int input(){
    printf("Sayi girin: \n");
    scanf("%d", &x);

    return x;
}

int rastgeleSayiUret(){
    int random = rand() % 5;
    return random;
}

int nAdetRandom(int n){
    for (int i = 1; i <= n; i++)
    {
        printf("%d. rastgele sayi = %d\n", i , rastgeleSayiUret());
    }
    
}