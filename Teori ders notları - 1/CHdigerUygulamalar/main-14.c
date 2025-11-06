#include <stdio.h>
// soru-14 Klavyeden girilen 10 adet sayý içerisinden negatif olanlarýn toplamýný, çift sayýlarýn çarpýmýný, 7'ye eþit olanlarýn adetini bul
int main(void) 
{
	int sayi=0,neg=0,cift=1,yedi=0,i;
	printf("10 Adet sayi giriniz\n");
	for(i=1;i<=10;i++)
	{
		printf("%d. sayiyi giriniz -->\n",i);
		scanf("%d",&sayi);
			if(sayi<0)
			{
			neg+=sayi;	
			}
		 if (sayi%2==0)
		{
		cift=cift*sayi;
		}
		if(sayi==7) yedi++;
	}
printf("negatiflerin toplami= %d  |cifterin carpimi= %d| yedi lerin sayisi= %d\n",neg,cift,yedi);
}
