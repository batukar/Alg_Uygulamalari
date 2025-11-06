#include <stdio.h>
// Fibonacci serisinin ilk 10 terimini
int main(void) 
{
	long long int sayi1=0,sayi2=1,sayi,i;
	printf("1.Fibbonacci sayisi %d\n",sayi1);
	printf("2.Fibbonacci sayiysi %d\n",sayi2);
	for(i=3;i<=50;i++)
	{
		sayi=sayi1+sayi2;
		printf("%llu.Fibbonacci sayisi %llu dir\n",i,sayi);
		sayi1=sayi2;
		sayi2=sayi;
	}
}
