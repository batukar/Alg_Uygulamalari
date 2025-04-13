#include <stdio.h>

char array[100];

void input(char array[]);
int uzunlukBul(char array[]);

int main() {
    input(array);
    int uzunluk = uzunlukBul(array);
    printf("Kelimenin uzunlugu: %d\n", uzunluk);
}

void input(char array[]){
    printf("Bir kelime girin: ");
    scanf("%s", array);
}

int uzunlukBul(char array[]) {
    int i = 0;
    int count = 0;

    while (array[i] != '\0') {
        i++;
        count++;
    }
    
    return count;
}