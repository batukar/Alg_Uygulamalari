#include <stdio.h>

#define SIZE 5

int main(){

    int array[SIZE] = {1, 62, 32, 64, 54};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }
    
    printf("Toplam değer: %d", sum);

}