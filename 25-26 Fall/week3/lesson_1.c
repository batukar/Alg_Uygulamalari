#include <stdio.h>

int main(){
    int a, b, c, max, min;

    printf("ilk sayiyi girin: \n");
    scanf("%d", &a);
    printf("ikinci sayiyi girin: \n");
    scanf("%d", &b);
    printf("ucuncu sayiyi girin: \n");
    scanf("%d", &c);

    if(a >= b && a >= c){
        max = a;
        if(b <= c){
            min = b;
        }else{
            min = c;
        }
    }else if(c >= a && c >= b){
        max = c;
        if(a <= b){
            min = a;
        }else{
            min = b;
        }
    }else{
        max = b;
        if(c <= a){
            min = c;
        }else{
            min = a;
        }
    }

    // if(a >= b && a >= c){
    //     max = a;
    // }else if(c >= a && c >= b){
    //     max = c;
    // }else{
    //     max = b;
    // }

    // if(a <= b && a <= c){
    //     min = a;  
    // }else if(c <= a && c <= b){
    //     min = c;
    // }else{
    //     min = b;
    // }

    printf("Girilen sayilardan en kucugu : %d\n", min);
    printf("Girilen sayilardan en buyugu : %d\n", max);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    return 0;
}