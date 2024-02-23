#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input();
int createArray(int size);
int printArray(int arr[], int size);
int bubbleSort(int arr[], int size); 
int randomNumberGenerator();

int number; // input değeri

int input(){
    scanf("%d", &number);
    return number;
}

int createArray(int size){
    int array[size];

    for (int i = 0; i < size; i++)
    {
        array[i] = randomNumberGenerator();
    }
    
    printArray(array, size);
    bubbleSort(array, size);
}

int printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d - ", arr[i]);
    }
    printf("\n");
}

int bubbleSort(int arr[], int size){
    int temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if(arr[j+1] < arr[j]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sıralanmış dizi : \n");
    printArray(arr, size);
}

int randomNumberGenerator(){
    int num;
    return num = rand() % 10000 + 1;
}

int main(){
    srand(time(NULL)); // aynı anda üretilen sayıların birbirinden farklı olmasını sağlayan metot

    printf("Dizi boyutunu girin: ");
    int arraySize = input();

    createArray(arraySize);
}