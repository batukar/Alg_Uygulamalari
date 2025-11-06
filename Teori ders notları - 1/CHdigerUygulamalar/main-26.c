#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//soru-26 1'den 63'e kadar olan sayýlar arasýnda istenilen sayýyý maksimum 6 seferde bul

int main(void) 

{
	int alt=1,ust=63,rastgele,tahmin=6,i,tsayi ;
	
	srand(time(NULL));
	rastgele=rand()%63+1;
	printf("%d\n",rastgele);
	for(i=1;i<=tahmin;i++)
	{
	   tsayi=(alt+ust)/2;
		if(tsayi==rastgele)
		{
		printf("Dogru tahmin\n");
		break;
		}
		else if(tsayi>rastgele) 
		{
		ust=tsayi;	
		}
		else  
		{
		alt=tsayi;	
		}
	

	}
		printf("Dogru sayi %d idi\n",rastgele);
}




