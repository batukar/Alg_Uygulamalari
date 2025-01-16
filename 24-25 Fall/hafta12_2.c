#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
    #include <windows.h> // Windows için Sleep kullanımı
#else
    #include <unistd.h>  // Linux/Unix için sleep kullanımı
#endif

void rastgeleSlotSec();
int randomSayiUret();
void duraklama(int saniye);

int main() {
    srand(time(NULL)); 

    rastgeleSlotSec();
    return 0;
}

void rastgeleSlotSec() {
    int slot1, slot2, slot3, slot4;

    while (1)
    {
        slot1 = randomSayiUret();
        slot2 = randomSayiUret();
        if(slot2 == slot1) continue;

        slot3 = randomSayiUret();
        if(slot3 == slot2 || slot3 == slot1) continue;

        slot4 = randomSayiUret();
        if(slot4 == slot3 || slot4 == slot2 || slot4 == slot1) continue;

        break;
    }

    printf("Secilen sayilar: \n");
    duraklama(1);
    printf("1. Slot: %d\n", slot1);
    duraklama(1);
    printf("2. Slot: %d\n", slot2);
    duraklama(1);
    printf("3. Slot %d\n", slot3);
    duraklama(1);
    printf("4. Slot: %d\n", slot4);
}

int randomSayiUret(){
    return rand() % 20 + 1;
}

void duraklama(int saniye) {
    #ifdef _WIN32
        Sleep(saniye * 1000); // Windows için milisaniye cinsinden bekleme
    #else
        sleep(saniye);        // Linux/Unix için saniye cinsinden bekleme
    #endif
}