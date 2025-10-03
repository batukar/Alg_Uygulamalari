// Şekil örneği


#include <stdio.h>
#include <math.h>

union Shape{
    struct{
        float length;
        float width;
    } rectangle;
    float radius;
};

int main(){
    union Shape sekil;
    int choice;

    printf("Şekil seçin: \n");
    printf("1.Rectangle (Dikdörtgen)\n2. Circle (Daire)\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Dikdörtgenin uzunluk ve genişlik değerlerini girin: ");
        scanf("%f %f", &sekil.rectangle.length, &sekil.rectangle.width);
        printf("Dikdörtgenin alanı: %.2f\n", sekil.rectangle.length * sekil.rectangle.width);
        break;

    case 2:
        printf("Dairenin çapını girin: ");
        scanf("%f", &sekil.radius);
        printf("Dairenin alanı: %.2f\n", M_PI * pow(sekil.radius,2));
        break;

    default:
        printf("Geçersiz seçim!\n");
    }


}