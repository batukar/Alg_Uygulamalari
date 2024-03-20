#include <stdio.h>

#define ROWS 3
#define COLS 3

//Fira-Code font
void tersYazdir(int matris[ROWS][COLS]){
    for (int i = ROWS - 1; i >= 0; i--)
    {
        for (int j = COLS - 1; j >= 0; j--)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    tersYazdir(matrix);
}