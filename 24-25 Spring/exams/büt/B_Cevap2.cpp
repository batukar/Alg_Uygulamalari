//Kendi isminiz ile bir *.txt dosyas� a�an, bu dosyaya �sim (char), ��renci no (int),
//TC No (int), S�n�f (int) ve ald��� dersler (char) girmemizi sa�layan 
//bir C program� yaz�n�z. Bu dosyaya istenildi�i kadar kay�t girilebilecek, 
//kay�rt girme i�lemini sonland�rmak i�in EOF kullan�lacak. 
//Kay�t girme i�lemi bitince dosya kapat�lacak.

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

