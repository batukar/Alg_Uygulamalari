#include <stdio.h>
#include <string.h>

union Data{
    int integer;
    float floating_point;
    char string[20];
};

int main(){
    union Data veri;
    int choise;

    printf("Veri tipi seçin : \n");
    printf("1. Integer\n2. Float\n3. String\n");
    scanf("%d", &choise);

    switch (choise)
    {
    case 1:
        printf("Integer değeri girin: ");
        scanf("%d", &veri.integer);
        printf("Girilen değer: %d\n", veri.integer);
        break;

    case 2:
        printf("Noktalı sayı girin: ");
        scanf("%f", &veri.floating_point);
        printf("Girilen noktalı sayı: %.2f\n", veri.floating_point);
        break;
    
    case 3:
        printf("String bir değer girin: ");
        scanf("%s", &veri.string);
        printf("Girilen değer: %s\n", veri.string);
        break;

    default:
        printf("Geçersiz seçim!");
    }

}