/*
// Girilen saniye deðerini saat dakika ve saniye cinsinden yazan program
#include <stdio.h>
main(void)
{
		int x, saat, dk, sn;
		printf ("Saniye deðeri giriniz :");
		scanf("%d", &x);
		saat = x / 3600;
		dk = (x % 3600)/60;
		sn = x- saat*3600-dk*60;
		printf("%d Saat: %d Dakika: %d Saniye ",saat,dk,sn);
		
}


#include <stdio.h>
#include <conio.h>
main(void)
{
int x,y,xcarpan=0,ycarpan=0,i;
scanf("%d%d",&x,&y);
i=(x-(x%2))/2;
while(i>0)
{
if(x%i==0)
xcarpan=xcarpan+i;
i--;
}
i=1;
while(i<y)
{
if(y%i==0)
ycarpan=ycarpan+i;
i++;
}
if(xcarpan==y && ycarpan==x)
printf("%d ile %d arkadas sayilardir" ,x,y);
else
printf("%d ile %d arkadas degildir" ,x,y);
getch();
}



/*#include <stdio.h>
//Dost sayýlar; 
// Soru kitapçýðýnda 63 ncüsayfa
// Yeni denemeler
main(void)
{
int x,y,xcarpan=0,ycarpan=0,i,j;
//puts ("x ve y sayilarini sirayla giriniz");
//scanf("%d%d",&x,&y);

for(x=1;x<=100;x++)
{
	for(y=1;y<=100;y++)
{
		for(i=1;i<=x;i++)
		{
		if(x%i==0){
		xcarpan=xcarpan+i;
		}

	}
	for(j=1;j<=y;j++)
	{
		if(y%j==0){
		ycarpan=ycarpan+j;
	}

	}
if(xcarpan==ycarpan)
	{
	printf("%d ile %d dost sayilardir\n" ,x,y);	
	}
}
if(xcarpan==ycarpan)
	{
	printf("%d ile %d dost sayilardir\n" ,x,y);	
	}	
}
	
if(xcarpan==ycarpan)
	{
	printf("%d ile %d dost sayilardir\n" ,x,y);	
	}
//else
//	{
//	printf("%d ile %d dost sayi degildir" ,x,y);	
//	}
}





#include <stdio.h>
//Dost sayýlar; 
// Soru kitapçýðýnda 63 ncüsayfa
main(void)
{
int x,y,xcarpan=0,ycarpan=0,i,j;
puts ("x ve y sayilarini sirayla giriniz");
scanf("%d%d",&x,&y);
	for(i=1;i<=x;i++)
		{
		if(x%i==0){
		xcarpan=xcarpan+i;
		}
	}
	for(j=1;j<=y;j++)
	{
		if(y%j==0){
		ycarpan=ycarpan+j;
		}
	}
if(xcarpan==y && ycarpan==x)
	{
	printf("%d ile %d dost sayilardir" ,x,y);	
	}
else
	{
	printf("%d ile %d dost sayi degildir" ,x,y);	
	}
}

/*

// Çarpým tablosu sorusu
#include <stdio.h>
main(void)
{
	int i ,j;
	for(i=1;i<=10;i++)
	{
	printf("\n");
	for(j=1;j<=10;j++)
		{
		printf ("%d * %d = %d \n",i,j,i*j);
		}
	}
}

/*
// C program to print Pascal’s Triangle
// using combinations in O(n^2) time
// and O(1) extra space function
#include <stdio.h>
// Driver code
int main()
{
    int n = 10;

    for (int line = 1; line <= n; line++) {
       for (int space = 1; space <= n - line; space++){
            printf("  ");
        // used to represent C(line, i)	   
	   }

        int coef = 1;
        for (int i = 1; i <= line; i++) {
            // The first value in a line
            // is always 1
            printf("%4d", coef);
            coef = coef * (line - i) / i;
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
int main(void) {
printf("%15.1f\n", 333.546372); // prints 333.5
printf("%15.2f\n", 333.546372); // prints 333.55
printf("%15.3f\n", 333.546372); // prints 333.546
printf("%15.4f\n", 333.546372); // prints 333.5464
printf("%-15.5f\n", 333.546372); // prints 333.54637
}



#include <stdio.h>
#include <math.h>
int main(void) {
printf("%-10.2f\n",pow(2.5, 10));
}



#include <stdio.h>
int main(void) {
    printf("%s", "ilk tamsayiyi girin ");
    int x = 0;
    scanf("%d", &x);  
    printf("%s", "ikinci tamsayiyi girin: ");
    int y = 0;
  scanf("%d", &y);  

   int i = 1;
   int power = 1;  

   while (i <= y) {  
     power *= x;  
      ++i;    
   }  
   printf("%d\n", power);  
}


*/


#include <stdio.h>
// n elemanlý Fibonacci dizisi
int main()
{
    int i, terim ;
	long long int t1 = 0, t2 = 1, nextTerm;
    printf("Terim sayisini girin: ");
    scanf("%d", &terim);

    printf("Fibonacci Dizisi :\n");

    for (i = 1; i <= terim; ++i)
    {
        printf("%lld  ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}

/*



#include <stdio.h>
int main(void) {
	int x = 1;
	for (x = 1; x <= 50; x++) {
   		if (x % 5 == 0) {
      	printf("%d\n", x);
   		}
   		else {
      	printf("%d\t", x);
   		}
	}
}



#include <stdio.h>
int main(void) {
	int x = 1;
	for (x = 1; x <= 50; ++x) {
  	 	printf("%d", x);
   		if (x % 5 == 0) {
      	puts("");
   		}
   		else {
      	printf("%s", "\t");
   		}
	}
}



#include <stdio.h>
int main(void) {
int x = 0;
	while (++x <= 50) {
   		if (x % 5 == 0) {
      	printf("%d\n", x);
   		}
   		else {
      	printf("%d\t", x);
   		}
	}
}


#include <stdio.h>
int main(void) {
	int x = 1;
	while (x <= 50) {
   		if (x % 5 == 0) {
      	printf("%d\n", x++);
   		}
   		else {
       printf("%d\t", x++);
   		}
	}
}


#include <stdio.h>
int main(void) {

	int x = 1;
	while (x <= 50) {
   printf("%d", x);
      if (x % 5 == 0) {
         puts("");
      }
      else {
         printf("%s", "\t");
      }
	++x;
	}
}
*/
