#include <stdio.h>
/*
90 - 100 AA
80 - 90 BA
70 - 80 BB
60 - 70 CB
50 - 60 CC
diğer FF
*/
int main(){
    int midterm, final, average;

    printf("Vize notu girin: \n");
    scanf("%d", &midterm);
    printf("Final notu girin: \n");
    scanf("%d", &final);

    average = ((midterm * 4 / 10) + (final * 6 / 10)) / 10; // rakamsal ifadeyi elde etmek icin 10'a bolduk.

    switch (average)
    {
    case 5: // 50 - 59
        printf("Ortalamniz: %d\n", average);
        printf("CC");
        break;
    case 6:
        printf("Ortalamniz: %d\n", average);
        printf("CB");
        break;
    case 7:
        printf("Ortalamniz: %d\n", average);
        printf("BB");
        break;
    case 8:
        printf("Ortalamniz: %d\n", average);
        printf("BA");
        break;
    case 9: case 10:
        printf("Ortalamniz: %d\n", average);
        printf("AA");
        break;
    default:
        printf("Ortalamniz: %d\n", average);
        printf("FF");
        break;
    }

}