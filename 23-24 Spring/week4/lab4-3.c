#include <stdio.h>
#include <stdbool.h>

#define ROWS 3
#define COLS 3

bool simetrikMi(int matris[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if(matris[i][j] != matris[j][i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int matrix[ROWS][COLS] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};

    if(simetrikMi(matrix)){
        printf("Matrix simetriktir.\n");
    }else{
        printf("Matris simetrik değildir.\n");
    }
}