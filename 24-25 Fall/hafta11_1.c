#include <stdio.h>

int x = 0;

int input();
int usAl(int taban, int us);

int main() {
    int taban = input();
    int us = input();

    printf("%d uzeri %d = %d\n", taban, us, usAl(taban, us));

    return 0;
}

int input(){
    printf("Sayi girin: \n");
    scanf("%d", &x);

    return x;
}

// Özyinelemeli üs alma fonksiyonu
int usAl(int taban, int us) {
    if(us == 0){
        return 1;
    }else{
        return taban * usAl(taban, us - 1);
    }

}