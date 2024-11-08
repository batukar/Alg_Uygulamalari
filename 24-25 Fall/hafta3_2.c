#include <stdio.h>

int main(){
    int num1, num2;
    printf("ilk sayiyi girin: \n");
    scanf("%d", &num1);
    printf("ikinci sayiyi girin: \n");
    scanf("%d", &num2);
    
    int toplam = num1 + num2;

    switch (toplam)
    {
    case 11:
        printf("sonuc 11 oldugu icin su an buradasin.");
        break;
    case 2:
        printf("sonuc 2 oldugu icin su an buradasin.");
        break;
    case 33:
        printf("sonuc 33 oldugu icin su an buradasin.");
        break;
    default:
        printf("sonuc herhangi bir sayi oldugu icin su an buradasin.");
        break;
    }

}