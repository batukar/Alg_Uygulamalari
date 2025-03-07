#include <stdio.h>

#define SIZE 6

int ortalama(int total);

int main() {
    int arr[SIZE] = {10, 20, 30, 40, 50, 60};
    int sum = 0;

    for (int i = 0; i < SIZE; i++){
        sum += arr[i];
    }

    printf("Dizinin elemanlari toplamı = %d\n", sum);

    printf("Dizinin elemanlarinin aritmetik ortalaması = %d\n", ortalama(sum));
}

int ortalama(int total){
    return total /= SIZE;
}
