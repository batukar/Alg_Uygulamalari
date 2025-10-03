#include <stdio.h>

int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int *ptr = (int *)matrix; 

    printf("matrix[0][0]: %d\n", *ptr);
    printf("matrix[0][1]: %d\n", *(ptr + 1));
    printf("matrix[1][0]: %d\n", *(ptr + 2));
    printf("matrix[1][1]: %d\n", *(ptr + 3));

    return 0;
}