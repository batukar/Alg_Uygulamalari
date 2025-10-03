#include <stdio.h>

int main(){
    int x;
    int count = 0;

    for (int i = 0; i < 5; i++){
        printf("Sayi girin:\n");
        scanf("%d", &x);

        if(x < 0){
            count++;
        }
    }
    
    printf("Girilen sayilardan %d tanesi negatiftir\n", count);
    printf("Girilen sayilardan %d tanesi pozitiftir", 5 - count);
}