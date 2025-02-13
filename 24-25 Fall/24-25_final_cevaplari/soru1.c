// Final Soru-1
// AVM Hediye Áeki
/*
Bir AVM'de yeniy˝l hediyesi da˝t˝lmas˝ planlan˝yor. AVM'ye her giren m¸˛teriye bir Áekili˛ numaras˝ veriliyor ve AVM'ye girdii saat kaydediliyor.  M¸˛teri AVM'den Á˝karken AVM'de geÁirdii s¸re saat olarak hesaplan˝yor. Her m¸˛teriye verilecek hediye ise ˛ˆyle planlan˝yor; 
1-	AVM'de 2 saat'e kadar kalanlara iÁin 100 TL hediye Áeki veriliyor.
2-	AVM'de 2 saat ile 4 saat aras˝nda kalanlara 200 TL hediye Áeki veriliyor.
3-	AVM'de 4 saatten fazla kalanlara ise 500 TL hediye Áeki veriliyor.
M¸˛teriye verilecek hediye Áekini hesaplamak iÁin bir program yap˝lmas˝ isteniyor. M¸˛terilerin kay˝t numaras˝ ve kald˝˝ s¸re saat olarak programa giriliyor. Program her m¸˛teriye verilecek hediye Áekini hesaplay˝p ekrana yazd˝r˝yor. 
Program EOF karakteri girilene kadar Áal˝˛maya devam ediyor. EOF karakteri girilince program sonlan˝yor.
NOT: EOF karakterinin ("ctrl+z" + Enter) tu˛u olduunu kabul edelim. Joker belirleme ad˝m˝ iÁin bir fonksiyon olu˛turulmas˝ gerekiyor.
*/
#include <stdio.h>

int s=0, hesap=0, Thesap=0;
int hesapfonk(int s);

int main(){
    int musteriNo;
    printf("Musteri Numarasini Giriniz: ");
    while (musteriNo = scanf("%d",&musteriNo) != EOF){
        printf("Musterinin Kac Saat Kaldigini Giriniz:");
        scanf("%d",&s);
        hesapfonk(s);
        printf("Musterinin hediye ceki: %d TL\n",hesap);
        Thesap = Thesap + hesap;
        printf("Musteri Numarasini Giriniz: ");
    }
    printf("Toplam Hediye Ceki = %d TL",Thesap);
}
	
int hesapfonk(int s){
    if(s < 2){
        hesap = 100;
    }
    else if(s >= 2 && s <= 4){
        hesap = 200;
    }
    else{
        hesap = 500;
    }
    return hesap;
}
