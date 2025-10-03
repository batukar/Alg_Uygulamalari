#include <stdio.h>
#include <string.h>

int main(){
    char first[] = "Merhaba";
    char second[] = "Dunya!";
    char result[20];

    strcpy(result, first);
    strcat(result, second);

    printf("Birleştirilen karakter dizileri: %s\n", result);

}