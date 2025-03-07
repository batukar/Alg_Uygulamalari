#include <stdio.h>

#define SIZE 5
int array[SIZE];

int input();
void maxBul(int arr[]);

int main() {
    input();

    for (int i = 0; i < SIZE; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    maxBul(array);
    return 0;
}

int input(){
    for (int i = 0; i < SIZE; i++)
    {
        printf("Bir eleman girin:\n");
        scanf("%d", &array[i]);
    }
}

void maxBul(int arr[]){
    int max = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Dizinin en buyuk elemani = %d\n", max);
}

