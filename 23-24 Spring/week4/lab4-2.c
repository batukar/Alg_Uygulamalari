#include <stdio.h>

#define ROWS 3
#define COLS 3

//Camelcase
int enBuyukEleman(int matris[ROWS][COLS]){
    int enBuyuk = matris[0][0];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if(matris[i][j] > enBuyuk){
                enBuyuk = matris[i][j];
            }
        }
    }
    
    return enBuyuk;
}

int main(){
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("İki boyutlu dizinin en büyük elemanı = %d\n", enBuyukEleman(matrix));

}