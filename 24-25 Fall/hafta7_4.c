#include <stdio.h>

int main(){
    int taban, us;
    int result = 1;

    printf("Taban sayisi girin: \n");
    scanf("%d", &taban);

    printf("Us bilgisi girin: \n");
    scanf("%d", &us);

    int temp = us;

    for(us; us > 0 ; us--){
        result *= taban; 
    }

    printf("%d sayisinin %d. kuvveti = %d\n", taban, temp, result);

}