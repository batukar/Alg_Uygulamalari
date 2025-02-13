/*
Geli˛tirilen yeni bir oyun iÁin kurallar ˛ˆyle veriliyor;
1-	Oyun 3 ki˛i ile oynan˝yor ve her oyuncuya 2 ile 12 aras˝nda 11 tane rastgele ta˛ veriliyor. 
2-	Oyunda Kaybedeni belirlemek iÁin 2 defa zar at˝l˝yor. Zarlar˝n toplam˝ da kaybeden oluyor.
3-	Her oyuncuya verilen ta˛lar Kaybeden ile kar˛˝la˛t˝r˝l˝yor. Kaybeden'e e˛it ta˛˝ olan oyuncular oyunu kaybediyor. 
Dierleri oyunu kazan˝yor. Kaybeden ve kazanan oyuncular ekrana yazd˝r˝l˝yor.
Not: Kaybeden'i belirlemek iÁin fonksiyon kullan˝n˝z. 
Rastgele bir say˝ ¸retmek iÁin de Áekirdek deer olarak bilgisayar zaman˝n˝ kullan˝n˝z.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int kaybedeniBul();
int kaybeden;

int main(){
	srand(time(NULL));
	int tas;
	int i,j;
		
    kaybedeniBul();
    printf("kaybeden numara: %d\n",kaybeden);
    
    for(i=1;i<=3;++i)
    {
        for(j=1;j<=12;++j)
        {
            tas = 2 + rand() % 10;
            printf("%d.tas %d\n",j,tas);
            if(tas == kaybeden)
            {
                printf("%d numarali oyuncu kaybetti\n",i);
                break;
            }
        }
        if (tas != kaybeden){
        printf("%d numarali oyuncu kazandi\n",i);
        }
    }
}

int kaybedeniBul(){
	int zar1 = 1 + rand() % 6;
	int zar2 = 1 + rand() % 6;
	kaybeden = zar1 + zar2;	
	return kaybeden;
}
