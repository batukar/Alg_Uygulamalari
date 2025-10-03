#include <stdio.h>

int main(){
    int x;
    // printf("Bir sayi girin: \n");
    // scanf("%d", &x);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", j+1);
        }
        printf("%d\n", i+1);
    }
    
}