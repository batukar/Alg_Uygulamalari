//S-1) "srand" ve "time" fonksiyonlarýný kullanarak 100 elemanlý, 
//1 ile 100 arasý rastgele sayýlardan oluþan bir dizi elde ediniz. 
//Elde ettiðiniz diziyi Bubble sort algoritmasý ile küçükten büyüðe doðru sýralayýnýz.  (30 puan)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int dizi[100];
	int i;
	srand(time(NULL));
		printf("Dizi elemanlari:\n");
	for(i=0; i<100; i++){
		dizi[i]=rand() %101;
		printf("%d\t", dizi[i]);
	}
	for (unsigned int pass = 1; pass < 100; ++pass) {
		for (size_t i = 0; i < 100 - 1; ++i) {
			if (dizi[i] > dizi[i + 1]) {
				int hold = dizi[i];
				dizi[i] = dizi[i + 1];
				dizi[i + 1] = hold;
			}
		}
	}
	puts("\n Sirali dizi");
	for (size_t i = 0; i < 100; ++i) {
		printf("%4d", dizi[i]);
	}
	puts("");
}
