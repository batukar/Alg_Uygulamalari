#include <stdio.h>



int main(){
    int even, odd;
    even = odd = 0;
    int num = 580;

    for (int i = 0; i <= num; i++){
        if(i % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }

    printf("0-%d arasinda %d tane cift, %d tane tek sayi vardir\n", num, even, odd);
    
}