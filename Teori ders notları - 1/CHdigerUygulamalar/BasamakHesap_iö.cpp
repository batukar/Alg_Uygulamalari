#include <stdio.h>
int main(void) 
{
	//GÝRÝLEN SAYININ BASAMAK SAYISINI BULAN PROGRAM
	  int sayi=0;
	  int sayac=1;
	  printf("Bir sayi giriniz-->");
	  scanf("%d",&sayi);
		do
		{
			if(sayi<=9)
			break;
			else 
			{
			sayi=sayi/10;
			sayac++;
			}
		}while(sayi>=9);
	 	printf("Girdiginiz sayi %d basamaklidir",sayac);
}
