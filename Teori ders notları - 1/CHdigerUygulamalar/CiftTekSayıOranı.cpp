#include <stdio.h>
//soru-12 Klavyeden girilen 10 adet sayýdan çift sayýlarýn toplamýnýn tek sayýlarýn toplamýna oranýný bulan.
int main(void) 
{
	int sayi,i;
	double cift=0,tek=0;
	printf("10 ADET SAYÝ GÝRÝNÝZ\n");
	for( i=1;i<=10;i++)
	{
		printf("%d. sayiyi giriniz \n",i);
		scanf("%d",&sayi);
		if(sayi%2==0)
		cift+=sayi;
		else
		tek+=sayi;
	}
	double oran=cift/tek;
	printf("Cift sayilarin tek sayilara oraný %.2f dir",oran);
}
