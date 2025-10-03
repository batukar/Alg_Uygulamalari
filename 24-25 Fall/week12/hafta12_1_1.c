#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

enum Yemek { Pizza, Hamburger, Doner, Lahmacun };
enum Tatli { Baklava, Kunefe };

enum Yemek rastgeleYemekSec();
enum Tatli rastgeleTatliSec();
int gecikme(int sn);
int yukleme();

int main() {
    srand(time(NULL)); 

    enum Yemek secilenYemek = rastgeleYemekSec();

    yukleme();

    printf("Rastgele secilen yemek: ");
    switch (secilenYemek) {
        case Pizza: printf("Pizza\n"); break;
        case Hamburger: printf("Hamburger\n"); break;
        case Doner: printf("Doner\n"); break;
        case Lahmacun: printf("Lahmacun\n"); break;
    }

    gecikme(1);
    yukleme();

    enum Tatli secilenTatli = rastgeleTatliSec();
    printf("Rastgele secilen tatli: ");
    switch (secilenTatli) {
        case 0: printf("Baklava\n"); break;
        case 1: printf("Kunefe\n"); break;
    }

    return 0;
}

enum Yemek rastgeleYemekSec() {
    return rand() % 4; 
}

enum Tatli rastgeleTatliSec() {
    return rand() % 2; 
}

int yukleme(){
    for (int i = 1; i <= 3; i++)
    {
        if (i == 1){
            printf("Secim yapiliyor.\n");
            gecikme(1);
            continue;
        }
        if (i == 2)
        {
            printf("Secim yapiliyor..\n");
            gecikme(1);
            continue;
        }
        if (i == 3)
        {
            printf("Secim yapiliyor...\n");
            // gecikme(1);
            continue;
        }
        break;
        
    }
    
}

int gecikme(int sn){
    #ifdef _WIN32
        Sleep(sn * 1000);
    #else
        sleep(sn);
    #endif
}

