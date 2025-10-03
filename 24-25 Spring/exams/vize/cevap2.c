#include <stdio.h>

#define SIZE 20

void bubbleSortDescending(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    int array[SIZE];

    printf("Lutfen 20 adet tamsayi giriniz:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d. sayi: ", i + 1);
        scanf("%d", &array[i]);
    }

    bubbleSortDescending(array, SIZE);

    printf("\nBuyukten kucuge siralanmis dizi:\n");
    printArray(array, SIZE);

    return 0;
}

void bubbleSortDescending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Büyükten küçüğe sıralama
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}