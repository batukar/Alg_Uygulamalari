#include <stdio.h>

// AA -> 90-100
// BA -> 80-90
// BB -> 70-80
// CB -> 60-70
// CC -> 50-60
// DD -> 40-50
// FF -> -40

int main(){
    int midterm, final, grade;
    printf("Vize Notu girin: \n");
    scanf("%d", &midterm);
    printf("Final notu girin: \n");
    scanf("%d", &final);

    grade = (midterm * 0.4 + final * 0.6) / 10;

    switch (grade){
    case 9: case 10:
        printf("Ortalama: %d\n", grade*10);
        printf("Harf notu: AA\n");
        break;
    case 8:
        printf("Ortalama: %d\n", grade * 10);
        printf("Harf notu: BA\n");
        break;
    case 7:
        printf("Ortalama: %d\n", grade * 10);
        printf("Harf notu: BB\n");
        break;
    case 6:
        printf("Ortalama: %d\n", grade * 10);
        printf("Harf notu: CB\n");
        break;
    case 5:
        printf("Ortalama: %d\n", grade * 10);
        printf("Harf notu: CC\n");
        break;
    case 4: case 3: case 2: case 1:
        printf("Ortalama: %d\n", grade * 10);
        printf("Harf notu: FF\n");
        break;
    default:
        printf("Hatali islem!\n");
        break;
    }

    return 0;
}