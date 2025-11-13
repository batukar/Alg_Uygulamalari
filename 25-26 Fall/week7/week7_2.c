#include <stdio.h>

int main(){
    int num, us;
    int result = 1;

    printf("Taban sayiyi girin: \n");
    scanf("%d", &num);
    printf("Us sayiyi girin: \n");
    scanf("%d", &us);

    for (int i = 0; i < us; i++){
        result *= num;
    }

    printf("%d^%d= %d\n", num, us, result);

}