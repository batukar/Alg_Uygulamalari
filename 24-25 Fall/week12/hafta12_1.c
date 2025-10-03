#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// enum bir veri tipidir!

enum Yemek { Pizza, Hamburger, Doner, Lahmacun };
enum Tatli { Baklava, Kunefe };

// fonk. prototoipi
enum Yemek rastgeleYemekSec();
enum Tatli rastgeleTatliSec();


int main() {
    srand(time(NULL)); 

    enum Yemek yemekSec = rastgeleYemekSec();

    printf("Secilen yemek: ");
    switch (yemekSec)
    {
    case 0:
        printf("Pizza\n");
        break;
    case 1:
        printf("Hamburger\n");
        break;
    case 2:
        printf("Doner\n");
        break;
    case 3:
        printf("Lahmacun\n");
        break;
    default:
        break;
    }

    enum Tatli tatliSec = rastgeleTatliSec();

    printf("Secilen Tatli: ");
    switch (tatliSec)
    {
    case Baklava:
        printf("Baklava\n");        
        break;
    case Kunefe:
        printf("Kunefe\n");
        break;
    default:
        break;
    }    

    return 0;
}

enum Yemek rastgeleYemekSec() {
    return rand() % 4;
}

enum Tatli rastgeleTatliSec() {
    return rand() % 2;    
}

