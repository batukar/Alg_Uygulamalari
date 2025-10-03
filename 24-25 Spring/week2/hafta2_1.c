#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 21

int array[SIZE];

void randomValueGenerator(int arr[]);
void printArray(int arr[]);

int main(){
    srand(time(NULL));

    // Rastgele eleman atama
    randomValueGenerator(array);

    // Diziyi yazdir
    printArray(array);
}

void randomValueGenerator(int arr[]){
    for (size_t i = 0; i < SIZE; i++){
        arr[i] = rand() % 10 + 1;
    }
}

void printArray(int arr[]){
    for (size_t i = 0; i < SIZE; i++){
        printf("Dizinin %d. elemani = %d\n", i + 1, arr[i]);
    }
}
