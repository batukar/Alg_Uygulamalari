#include <stdio.h>
//#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 

//Girilen bir sayýnýn basamaklarýnýn küpleri toplamý sayýnýn kendine eþit olup olmadýðýný bulan programýn algoritma ve akýþ diyagramýný çiziniz
{
	int sayi,top=0,x,birler,onlar,yuzler;
	  printf("Bir sayi giriniz-->");
	  scanf("%d",&sayi);
	   
		  x=sayi;
		  birler =sayi%10;
		  sayi=sayi/10;
		  onlar=sayi%10;
		  yuzler=sayi/10;
		  top=(birler*birler*birler)+(onlar*onlar*onlar)+(yuzler*yuzler*yuzler);
		  printf("Birler: %d\n",birler);
		  printf("Onlar : %d\n",onlar);
		  printf("Yuzler: %d\n",yuzler);
		  printf("%d\n",top);
		  if(x==top){
		  printf("esittir");
		  }
		  		  else {
		  printf("esit degil!!");
		  }
		  
		  
		   
		   
		   
		   
	 	
	
	
	
	return 0;
}
