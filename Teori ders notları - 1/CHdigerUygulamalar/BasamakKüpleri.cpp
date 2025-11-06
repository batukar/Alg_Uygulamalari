#include <stdio.h>
int main(void) 
//Girilen en fazla 3 basamaklý bir sayýnýn basamaklarýnýn küpleri toplamý sayýnýn kendine eþit olup olmadýðýný bulan programýn algoritma ve akýþ diyagramýný çiziniz
{
	int sayi,top=0,x,birler,onlar,yuzler;
	  printf("Bir sayi giriniz-->");
	  scanf("%d",&sayi);
	      birler =sayi%10;
		  sayi=sayi/10;
		  onlar=sayi%10;
		  yuzler=sayi/10;
		  top=(birler*birler*birler)+(onlar*onlar*onlar)+(yuzler*yuzler*yuzler);
		  printf("Toplam=%d, Birler=%d, Onlar=%d, Yuzler=%d\n",top, birler, onlar, yuzler);
		  if(x==top)
		  printf("esittir");
		  else 
		  printf("esit degil!!");
}
