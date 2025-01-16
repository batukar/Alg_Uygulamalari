#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

// fonk. prototipi
int gecikme(int sn);

int main(){
    printf("Basladi\n");
    gecikme(3);
    printf("5 sn gecti.\n");
}

int gecikme(int sn){
    #ifdef _WIN32
        Sleep(sn * 1000);
    #else
        sleep(sn);
    #endif
}