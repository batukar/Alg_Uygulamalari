#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

int array[SIZE];

void randomValueGenerator(int arr[]);
void printArray(int arr[]);
void bubbleSort(int arr[]);

int main(){
    srand(time(NULL));

    // Rastgele eleman atama
    randomValueGenerator(array);

    // Diziyi yazdir
    printArray(array);

    // Dizi sirala -- BubbleSort
    printf("Siralanmis dizi: \n");
    bubbleSort(array);
}

void randomValueGenerator(int arr[]){
    for (size_t i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 10 + 1;
    }
}

void printArray(int arr[]){
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("Dizinin %d. elemanı = %d\n", i + 1, arr[i]);
    }
}

void bubbleSort(int arr[]){
    int temp;
    for (size_t i = 0; i < SIZE - 1; i++)
    {
        for (size_t j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printArray(array);
}