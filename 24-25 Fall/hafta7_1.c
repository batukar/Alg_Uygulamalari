#include <stdio.h>

int main(){
    int num, temp, count;
    count = 0;

    printf("Bir sayi girin: ");
    scanf("%d", &num);

    temp = num;

    for(num; num > 0 ; num-- ){
        // printf("%d\n", num);
        if(num %2 == 0){
            count++;
        }
    }

    int tek = temp - count;
    printf("0 ile %d arasindaki sayilardan %d tanesi cifttir.\n", temp, count);
    printf("0 ile %d arasindaki sayilardan %d tanesi tektir.\n", temp, tek);

}