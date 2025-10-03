//Kendi isminiz ile bir *.txt dosyasý açan, bu dosyaya Ýsim (char), Öðrenci no (int),
//TC No (int), Sýnýf (int) ve aldýðý dersler (char) girmemizi saðlayan 
//bir C programý yazýnýz. Bu dosyaya istenildiði kadar kayýt girilebilecek, 
//kayýrt girme iþlemini sonlandýrmak için EOF kullanýlacak. 
//Kayýt girme iþlemi bitince dosya kapatýlacak.

#include <stdio.h>
int main(void)
{
	FILE *cfPtr;
		if ((cfPtr = fopen("Batu.txt", "w")) == NULL) {
		puts("Dosya acilamiyor");
	}
	else {
		puts("Ad, Soyad, Ogrenci no,  TC No, Sinif  ve Ders");
		puts("Bitirmek icin EOF giriniz.");
		char Ad [10];
		char SoyAd [10];
		int OgrNo [11];
		int TCNo [12];
		int Snf [1];
		char Ders [10];
		scanf("%s %s %d %d %d %s",Ad, SoyAd, &OgrNo, &TCNo, &Snf, Ders);
		while (!feof(stdin) ) {
			fprintf(cfPtr, "%s %s %d %d %d %s\n", Ad, SoyAd, *OgrNo, *TCNo, *Snf, Ders);
			printf("%s\n", "");
			scanf("%s %s %d %d %d %s",Ad, SoyAd, &OgrNo, &TCNo, &Snf, Ders);
		}
		fclose(cfPtr); 
	}
}

