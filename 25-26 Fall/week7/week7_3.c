#include <stdio.h>

int main(){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == 1 || i == 2 || i == 3){
                if(j == 1 || j == 2 || j == 3){
                    printf(" ");
                }else{
                    printf("*");
                }
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}