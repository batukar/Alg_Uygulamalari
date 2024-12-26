#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x = 0;

int input();
int zarAt(int n);
int maksBul(int a, int b, int c, int d, int e, int f);

int main(){
    srand(time(NULL));

    int atisSayisi = input();
    zarAt(atisSayisi);
}

int input(){
    printf("Sayi girin: \n");
    scanf("%d", &x);

    return x;
}

int zarAt(int n){
    int zar; // zar nesnesi (?)
    // zar yuzleri
    int bir = 0, iki = 0, uc = 0,
        dort = 0, bes = 0, alti = 0;

    for (int i = 1; i <= n; i++){
        zar = rand() % 6 + 1;

        printf("%d. atis = %d\n", i, zar);
        
        switch (zar)
        {
        case 1:
            bir++;
            break;
        case 2:
            iki++;
            break;
        case 3:
            uc++;
            break;
        case 4:
            dort++;
            break;
        case 5:
            bes++;
            break; 
        case 6:
            alti++;
            break;  
        default:
            break;
        }
    }

    printf("%d kez 1 gelmistir\n", bir);
    printf("%d kez 2 gelmistir\n", iki);
    printf("%d kez 3 gelmistir\n", uc);
    printf("%d kez 4 gelmistir\n", dort);
    printf("%d kez 5 gelmistir\n", bes);
    printf("%d kez 6 gelmistir\n", alti);

    maksBul(bir, iki, uc, dort, bes, alti);

}

int maksBul(int a, int b, int c, int d, int e, int f){
    int max = a;
    int zarYuzu = 1;
    if(max <= b){
        max = b;
        zarYuzu = 2;
    }
    if(max <= c){
        max = c;
        zarYuzu = 3;
    }
    if(max <= d){
        max = d;
        zarYuzu = 4;
    }
    if(max <= e){
        max = e;
        zarYuzu = 5;
    }
    if(max <= f){
        max = f;
        zarYuzu = 6;
    }

    return printf("En Fazla Gelen Sayi %d dir ve %d kere gelmistir",zarYuzu,max);

}
