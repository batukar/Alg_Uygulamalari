#include <stdio.h>

struct Product
{
    int code;
    char name[50];
    float price;
};

int main(){
    struct Product product1 = {1234, "Bilgisayar", 19999.99};

    printf("Ürün bilgileri: \n");
    printf("Ürün kodu: %d\n", product1.code);
    printf("Ürün adı: %s\n", product1.name);
    printf("Ürün fiyatı: %.2f\n", product1.price);

}