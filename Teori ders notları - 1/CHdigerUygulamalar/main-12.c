#include <stdio.h>
#include <stdlib.h>


//soru-12 Klavyeden girilen 20 adet sayýdan çift sayýlarýn toplamýnýn tek sayýlarýn toplamýna oranýný bulan.
int main(void) 


{
	int sayi,cift=0,tek=0,i;
	printf("20 ADET SAYÝ GÝRÝNÝZ\n");
	for( i=1;i<=20;i++)
	{
		printf("%d. sayiyi giriniz \n",i);
		scanf("%d",&sayi);
		if(sayi%2==0){
		cift+=sayi;
		}
		else{
		tek+=sayi;
		}
	}
	double oran=(double)cift/tek;
	printf("Cift sayilarin tek sayilara oraný %.2f dir",oran);
	
	
	
	return 0;
}
