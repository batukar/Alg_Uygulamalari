#include <stdio.h>

int x = 0; // global değişken
int result = 0;

int input();
int toplam(int x, int y);
int fark(int a, int b);

int main(){
    int num1 = input();
    int num2 = input();

    printf("%d ile %d sayilarinin toplami = %d\n", num1, num2, toplam(num1, num2));
    printf("%d ile %d sayilarinin farki = %d\n", num1, num2, fark(num1, num2));
}

int input(){
    printf("Sayi girin: \n");
    scanf("%d", &x);

    return x;
}

int toplam(int x, int y){
    return x + y;
}

int fark(int a, int b){
    return result =  a - b;
}


