#include <stdio.h>

int main(){
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        array[i] = i * 3;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d - ", array[i]);
    }
    
    
}