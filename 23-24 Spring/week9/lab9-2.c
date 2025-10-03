#include <stdio.h>
#include <string.h>

union MemoryBlock{
    int integer;
    float floating_point;
    char string[20];
};

int main(){
    union MemoryBlock block;

    block.integer = 1234;
    printf("integer : %d\n", block.integer);

    block.floating_point = 3.14;
    printf("Noktalı sayı : %.2f\n", block.floating_point);

    strcpy(block.string, "Merhaba Dünya!");
    printf("Metin : %s\n", block.string);

}