#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input();
int createArray(int size);
int printArray(int arr[], int size);
int bubbleSort(int arr[], int size); // prototip oluşturuldu, fonksiyon iskelet halde bulunuyor.
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

}

int printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d - ", arr[i]);
    }
}

int bubbleSort(int arr[], int size){

}

int randomNumberGenerator(){
    int num;
    return num = rand() % 100 + 1;
}



int main(){
    srand(time(NULL)); // aynı anda üretilen sayıların birbirinden farklı olmasını sağlayan metot

    printf("Dizi boyutunu girin: ");
    int arraySize = input();

    createArray(arraySize);
}