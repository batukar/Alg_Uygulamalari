/* Oyun 2 oyuncu ile oynanýyor
Baþlangýçta her iki oyuncuya (1 ile 13 arasýnda) rastgele 2 þer kart veriliyor. Kartlarýn deðerlerinin toplamý 35 olan oyunu kaybediyor. 
Bir oyuncu en fazla 5 kart alabiliyor. Oyuncu isterse kart almayýp pas geçebiliyor.
En yüksek puaný alan oyuncu oyunu kazanýyor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int oyuncu1 = 0, oyuncu2 = 0, i, kart1, kart2;
	
	oyuncu1 = rand() % 13 + 1;
	oyuncu2 = rand() % 13 + 1;
	
	printf("oyuncu 1 puan: %d\n", oyuncu1);
	printf("oyuncu 2 puan: %d\n", oyuncu2);
	
	oyuncu1 += rand() % 13 + 1;
	oyuncu2 += rand() % 13 + 1;	
	
	printf("oyuncu 1 puan: %d\n", oyuncu1);
	printf("oyuncu 2 puan: %d\n", oyuncu2);
	
	for (i = 1; i <= 3; i++) {
		printf("\nOyuncu 1: kart istiyorsaniz 1, istemiyorsaniz 0 girin: ");
		scanf("%d", &kart1);
		
		if (kart1 == 1) {
		oyuncu1 += rand() % 13 + 1;	
		}
		
		printf("\nOyuncu 2: kart istiyorsaniz 1, istemiyorsaniz 0 girin: ");
		scanf("%d", &kart2);
		
		if (kart2 == 1) {
		oyuncu2 += rand() % 13 + 1;	
		}
		
		printf("oyuncu 1 puan: %d\n", oyuncu1);
	    printf("oyuncu 2 puan: %d\n", oyuncu2);
		
		if (oyuncu1 > 35) {
			printf("Oyuncu 1 kaybetti.\n");
		}
		
		if (oyuncu2 > 35) {
			printf("Oyuncu 2 kaybetti.\n");
			break;
		}
	}
	
	if (oyuncu1 == oyuncu2) {
		printf("Berabere (oyuncu1 puan: %d oyuncu2 puan: %d.\n", oyuncu1, oyuncu2);
	} else if (oyuncu1 > oyuncu2) {
		printf("Oyuncu 1 kazandi (oyuncu1 puan: %d oyuncu2 puan: %d.\n", oyuncu1, oyuncu2);
	} else {
		printf("Oyuncu 2 kazandi (oyuncu1 puan: %d oyuncu2 puan: %d.\n", oyuncu1, oyuncu2);
	}
}

