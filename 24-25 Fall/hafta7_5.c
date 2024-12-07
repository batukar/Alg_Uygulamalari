#include <stdio.h>

int main(){
    //(x + y)^2 - (x^2 + y^2) = ?
    int x, y, ilkDenklem, ikinciDenklem, result;

    printf("x sayisi girin:");
    scanf("%d", &x);

    printf("y sayisi girin:");
    scanf("%d", &y);
    
    ilkDenklem = (x + y)*(x + y);
    ikinciDenklem = (x*x) + (y*y);

    // result = ilkDenklem - ikinciDenklem;

    result = 2 * x * y;

    printf("Sonuc = %d\n", result);
}