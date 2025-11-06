// ex05_09.c
// Otopark ücreti hesaplama
/*
- 0-3 saat için 50 TL
- Sonraki her saat için 10 TL
- En fazla ücret 200 TL
- 24 saatten fazla kimse park etmiyor.
- Ýstediðimiz kadar müþteri için program çalýþsýn.
- Müþteri sýra no klavyeden girilsin
- Her müþterinin kaldýðý saat girilsin.
- Her müþteri için toplam ücret hesaplanýp yazdýrýlsýn.
- Klavyeden -1 grilince program sonlansýn ve toplam hesap yazdýrýlsýn.
*/

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
			
			printf("%d nolu musterinin hesabi:%d\n",musteriNo,hesap);
			Thesap = Thesap + hesap;
			
			printf("Musteri Numarasini Giriniz:");
			scanf("%d",&musteriNo);
		}
		printf("Toplam Hesap = %d",Thesap);
	}
	
	int hesapfonk(int s){
		if(s <= 3){
			hesap = 50;
		}
		else if(s > 3 && s <= 18){
			hesap = 50 + (s-3)*10;
		}
		else{
			hesap = 200;
		}
		return hesap;
	}
