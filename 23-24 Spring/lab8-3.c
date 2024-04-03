#include <stdio.h>

struct Rectangle
{
    float width;
    float length;
};

int main(){
    struct Rectangle rectangle1 = {5.6, 3.2};
    struct Rectangle rectangle2 = {6.2, 18.4};

    float area1 = rectangle1.width * rectangle1.length;
    float area2 = rectangle2.width * rectangle2.length;

    float total = area1 + area2;

    printf("Dikdörtgenin alanı = %.2f\n", total);

}

