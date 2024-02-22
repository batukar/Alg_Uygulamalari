#include <stdio.h>

#define STUDENTS 3
#define COURSES 4

int main(){

    float grades[STUDENTS][COURSES] = {
            {88.2, 78.0, 67.4, 92.6},
            {99.2, 88.5, 74.2, 58.9},
            {86.6, 64.2, 72.7, 56.0}
    };

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("%d. Öğrencinin notları: ", i + 1);
        for (int j = 0; j < COURSES; j++)
        {
            printf("%.2f", grades[i][j]);
        }
        printf("\n");
        
    }

 }