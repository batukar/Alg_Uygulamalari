#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//ax2 + bx +c = 0 tipindeki bir denklemin köklerini bul
int main(void) 
{
int a,b,c,x1,delta,x2;
printf("a b ve c degerlerini gir\n");
scanf("%d%d%d",&a,&b,&c);

delta=(b*b)-4*a*c;

if(delta<0)
printf("Reel koku yok ");

else
	{
	x1=(-b-(pow(delta,0.5)))/2*a;
	x2=(-b+(pow(delta,0.5)))/2*a;
	printf("1.kok ->%d 2.kok-> %d",x1,x2);
	}
}
