#include <stdio.h>

#define size 5

int main(){
    int array[size] = {1, 2, 3, 4, 5}; // array[0] = 1, ... array[3]= 4

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    

}