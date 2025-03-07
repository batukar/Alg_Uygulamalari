#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

int array[SIZE];

void randomValueGenerator(int arr[]);
void printArray(int arr[]);
void bubbleSort(int arr[]);
void findMedian(int arr[]);
void findMode(int arr[]);

int main(){
    srand(time(NULL));

    // Rastgele eleman atama
    randomValueGenerator(array);

    // Diziyi yazdir
    printArray(array);

    // Dizi sirala -- BubbleSort
    printf("Siralanmis dizi: \n");
    bubbleSort(array);

    // Medyan - ortanca eleman bulma
    findMedian(array);

    // Mod - en cok tekrar eden eleman bulma
    findMode(array);
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

void findMedian(int arr[]){
    int medianIndex = SIZE / 2;
    printf("Medyan = %d\n", arr[medianIndex]);
}

void findMode(int arr[]){
    int mode = arr[0];
    int amountCounter = 1;
    int controlCounter = 1;

    for (int i = 0; i < SIZE; i++){
        if (arr[i] == arr[i - 1]){
           controlCounter++;
        }else{
            if (controlCounter > amountCounter)
            {
                amountCounter = controlCounter;
                mode = arr[i - 1];
            }
            controlCounter = 1;
        }
        
    }

    printf("En cok tekrar eden sayi : %d\nTekrar adedi: %d\n", mode, amountCounter);
}