#include <stdio.h>

int notlar[5];
void input();
void maxBul(int array[]);

int main(){
    input();
    for (int i = 0; i < 5 ; i++){
        printf("notlar [%d] = %d\n", i, notlar[i]);
    }

    maxBul(notlar);
}

void input(){
    for (int i = 0; i < 5 ; i++){
        printf("%d. notu girin ", i + 1);
        scanf("%d", &notlar[i]);
    }
}

void maxBul(int array[]){
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("Dizideki en buyuk sayi = %d", max);
}