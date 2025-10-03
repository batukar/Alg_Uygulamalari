#include <stdio.h>

struct Student
{
    char name[100];
    int no;
    float grade;
};

int main(){
    struct Student student1;

    printf("Öğrenci adı: ");
    scanf("%s", &student1.name);
    printf("Öğrenci numarası: ");
    scanf("%d", &student1.no);
    printf("Sınav notu: ");
    scanf("%f", &student1.grade);

    printf("Öğrenci bilgileri: \n");
    printf("Adı: %s\n", student1.name);
    printf("No: %d\n", student1.no);
    printf("Notu: %.2f\n", student1.grade);
}