// sayı tutturma oyunu
// FiraCode adli fontu kullaniyorum

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int control = 0;
    int count = 1;

    while (control != 1)
    {
        int number = rand() % 10000 + 1; // 1-10000 arasinda rastgele sayi uretti

        if(number == 44){
            control++;
            printf("44 yakalandi!!\n");
        } else
            printf("%d. Deneme\n", count);

        count++;
    }
    
}