#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
    #include <windows.h> // Windows iÃ§in Sleep kullanÄ±mÄ±
#else
    #include <unistd.h>  // Linux/Unix iÃ§in sleep kullanÄ±mÄ±
#endif

void yarisiBaslat();
int randomSayiUret();
void duraklama(int saniye);

int main() {
    srand(time(NULL)); 

    yarisiBaslat();
    return 0;
}

void yarisiBaslat() {
    int yarismaci1, yarismaci2, yarismaci3;

    while (1)
    {
        yarismaci1 = randomSayiUret();
        yarismaci2 = randomSayiUret();
        if (yarismaci1 == yarismaci2) continue;

        yarismaci3 = randomSayiUret();
        if (yarismaci3 == yarismaci2 || yarismaci3 == yarismaci1) continue;
        
        break;
    }

    printf("Yarisma basliyor...\n");
    duraklama(2);
    printf("1. Yarismaci sayisi: %d\n", yarismaci1);
    duraklama(2);
    printf("2. Yarismaci sayisi: %d\n", yarismaci2);
    duraklama(2);
    printf("3. Yarismaci sayisi: %d\n", yarismaci3);

    int kazanan;
    if (yarismaci1 > yarismaci2 && yarismaci1 > yarismaci3)
        kazanan = 1;
    else if (yarismaci2 > yarismaci1 && yarismaci2 > yarismaci3)
        kazanan = 2;
    else
        kazanan = 3;

    printf("\nKazanan: %d. Yarismaci! (%d)\n", kazanan, (kazanan == 1 ? yarismaci1 : (kazanan == 2 ? yarismaci2 : yarismaci3)));
}

int randomSayiUret(){
    return rand() % 10 + 15;  
}

void duraklama(int saniye) {
    #ifdef _WIN32
        Sleep(saniye * 1000); // Windows iÃ§in milisaniye cinsinden bekleme
    #else
        sleep(saniye);        // Linux/Unix iÃ§in saniye cinsinden bekleme
    #endif
}
