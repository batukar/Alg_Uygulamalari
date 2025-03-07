#include <stdio.h>

#define size 5
int array[size];

void input();
void maxBul(int arr[]);

int main() {
    input();    
    // Dizi elemanlarini yazdirma
    for (int i = 0; i < size; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    maxBul(array);
    return 0;
}

void input(){
    // Diziye eleman ekleme
    for (int i = 0; i < size; i++){
        printf("Bir eleman ekleyin: ");
        scanf("%d", &array[i]);
    }
}

void maxBul(int arr[]){
    int max = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] > max)
        {   
            max = arr[i];
        }  
    }
    printf("En buyuk eleman eleman %d", max);
    
}