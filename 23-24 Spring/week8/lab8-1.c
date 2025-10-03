#include <stdio.h>

struct Point{
    int x;
    int y;
};

int main(){
    struct Point point1 = {3, 5};
    struct Point point2 = {8, 12};

    printf("Nokta1'in Koordinatları : (%d, %d)\n", point1.x, point1.y);
    printf("Nokta2'nin Koordinatları : (%d, %d)\n", point2.x, point2.y);

}