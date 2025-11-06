#include <stdio.h>
#include <stdlib.h>

/* Girilen degerin harf mi sayý mý olduðunu bulan program  */

int main(void) 
{
char c;
    printf("Bir karakter girin: ");
    scanf("%c",&c);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))//Bu bir kontroldür böyle yaparak a'dan z'ye bütün harfleri kontrol edebiliriz
        printf("%c bir harftir.",c);
    else
        printf("%c bir harf degildir.",c);
}
