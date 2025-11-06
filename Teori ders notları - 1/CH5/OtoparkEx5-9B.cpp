// ex05_09.c
// Otopark ücreti hesaplama
#include <stdio.h>

	int s=0, hesap=0, Thesap=0;
	
	int hesapfonk(int s);
	int main(){
		int musteriNo;
		printf("Programi Durdurmak Isterseniz -1 Giriniz\n");
		printf("Musteri Numarasini Giriniz:");
		scanf("%d",&musteriNo);
		
		while(musteriNo != -1){
			printf("Musterinin Kac Saat Kaldigini Giriniz:");
			scanf("%d",&s);
			hesapfonk(s);
			
			printf("%d nolu musterinin hesabi:%d TL\n",musteriNo,hesap);
			Thesap = Thesap + hesap;
			
			printf("Musteri Numarasini Giriniz:");
			scanf("%d",&musteriNo);
		}
		printf("Toplam Hesap = %d TL",Thesap);
	}
	
	int hesapfonk(int s){
		if(s <= 3){
			hesap = 100;
		}
		else if(s > 3 && s <= 11){
			hesap = 100 + (s-3)*50;
		}
		else{
			hesap = 500;
		}
		return hesap;
	}
