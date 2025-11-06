#include <stdio.h>

int main(){
    int num = 10;
    int count = 0;
    int even, odd;
    for (int i = 0; i <= num; i++){
        if(i % 2 == 0){
            even = ++count;
        }else{
            odd = num - count;
        }
    }

    printf("0 ile %d arasinda %d tane cift, %d tane tek sayi vardir.\n", num, even, odd);
}