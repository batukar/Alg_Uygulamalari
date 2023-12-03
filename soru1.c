/*
// Pseudo Kod ==>

START

examGrade değişkeni tanımla.

while(True){
    İNPUT(examGrade)

    if(examGrade >= 80){
        PUTS(Geçti-A)
    } else if(examGrade >= 70){
        PUTS(Geçti-B)
    } else if(examGrade >= 60){
        PUTS(Geçti-C)
    } else if(examGrade >= 50){
        PUTS(Geçti-D)
    } else if(examGrade == -1){
        PUTS(Programı sonlandır)
    } else 
        PUTS(Kaldı-F)
}

END

*/

#include <stdio.h>

int main() {
    int examGrade;

    while (1) {
        printf("Sinav notunu giriniz: ");
        scanf("%d", &examGrade);

        if (examGrade >= 80) {
            printf("Geçti - A\n");
        } else if (examGrade >= 70) {
            printf("Geçti - B\n");
        } else if (examGrade >= 60) {
            printf("Geçti - C\n");
        } else if (examGrade >= 50) {
            printf("Sartli Gecti - D\n");
        } else if (examGrade == -1) {
            printf("Program sonlandiriliyor.\n");
            break;
        } else {
            printf("Kaldi - F\n");
        }
    }

    return 0;
}