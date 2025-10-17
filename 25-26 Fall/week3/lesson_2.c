#include <stdio.h>

int main(){

    int renk;

    printf("~~~~~~Renk Tablosu~~~~~~\n");
    printf("1- Siyah\n");
    printf("2- Kirmizi\n");
    printf("3- Turuncu\n");
    printf("4- Yesil\n");
    printf("5- Mavi\n");

    printf("renk numarasi girin: \n");
    scanf("%d", &renk);

    switch (renk)
    {
    case 1:
        printf("Siyahi sectiniz.\n");
        break;
    case 2:
        printf("Kirmiziyi sectiniz.\n");
        break;
    case 3:
        printf("Turuncuyu sectiniz\n");
        break;
    case 4:
        printf("Yesili sectiniz\n");
        break;
    case 5:
        printf("Maviyi sectiniz\n");
        break; 
    default:
        printf("Hatali secim yaptiniz. Tekrar deneyin!\n)");
        break;
    }

}