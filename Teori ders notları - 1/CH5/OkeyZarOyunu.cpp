/*
joker belirle
Oyunda 4 oyuncu bulunuyor
her oyuncuya 1 ile 13 arasýnda rastgele 14 taþ verilsin
iki zar atýlsýn
iki zarýn toplamý kaydedilsin
üçüncü bir zar atýlsýn bu zarýn deðeri
1 ise joker 1
6 ise joker 13
diðer durumlarda ise joker ilk iki zarýn toplamý olsun
joker'e sahip olan oyuncular oyunu kazansýn.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jokerBul();
int joker;
int main()
{
	srand(time(NULL));
	int tas;
	int i,j;
		
		jokerBul();
		printf("joker: %d\n",joker);
		
		for(i=1;i<=4;++i)
		{
			for(j=1;j<=14;++j)
			{
				tas = 1 + rand() % 13;
				printf("%d.tas %d\n",j,tas);
				if(tas == joker)
				{
					printf("%d numarali oyuncu kazandi\n",i);
					break;
				}
			}
			if (tas != joker){
			printf("%d numarali oyuncu kazanamadi\n",i);
			}
			
		}
	}


int jokerBul()
{
	int zar1 = 1 + rand() % 6;
	int zar2 = 1 + rand() % 6;
	int zar3 = 1 + rand() % 6;
		
	if (zar3 == 1)
	{
		joker = 1;
	}
	
	else if(zar3 == 6)
	{
		joker = 13;
	}
	
	else
	{
		joker = zar1 + zar2;
	}
	
	return joker;
	
}
