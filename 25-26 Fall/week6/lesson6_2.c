#include <stdio.h>




int main(){
    int total = 0;
    int num = 10;
  

    for(int i = 0; i <= num; i++ ){
        total += i;
    }
    printf("0 ile %d arasindaki sayilarin toplami: %d\n",num, total);
}