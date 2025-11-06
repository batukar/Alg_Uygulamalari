#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int oyuncuBakiyesi;
int o1Bakiye;
int o2Bakiye;
int k;
int oyun();

int main() {
	srand(time(NULL));

	printf("Oyuncu Bakiyesini Giriniz :");
	scanf("%d",&oyuncuBakiyesi);	
	int ob;

	for(ob = 1; ob <= oyuncuBakiyesi; ob++)
	{	
		oyun();
		if(k == 1)
		{
			o1Bakiye += o2Bakiye;
			printf("Oyuncu 1 Kazandi %d\n",o1Bakiye);
			printf("\n");
		}
		else
		{
			o1Bakiye--;
			printf("Oyuncu 1 Bakiyesi %d\n",o1Bakiye);
			printf("\n");
		}
		oyun();
		if(k == 1)
		{
			o2Bakiye += o1Bakiye;
			printf("Oyuncu 2 Kazandi %d\n",o2Bakiye);
			printf("\n");
		}
		else
		{
			o2Bakiye--;
			printf("Oyuncu 2 Bakiyesi %d\n",o2Bakiye);
			printf("\n");
		}
	printf("k_degeri= %d",k);
	printf("\n");
	}	
}

int oyun()
{
	int a = rand() % 2;

	int b = rand() % 2;
	int c = rand() % 2;
	printf("%d,%d,%d",a,b,c);
	printf("\n");
	if(a == b && a ==c)
	{
		k = 1;	
	}	
	return k;
}
