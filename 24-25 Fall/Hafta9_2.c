




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int random = rand() % 100 + 1;

    printf("Rastgele sayi = %d", random);
}
