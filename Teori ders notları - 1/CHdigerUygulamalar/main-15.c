#include <stdio.h>
#include <stdlib.h>

//soru-15 carpým tablosu

int main(void)

 {
 	int i,j;
 	printf(" Carpim Tablosu ");
 	for(i=1;i<=10;i++)
 	{
 		printf("\n");
 		for(j=1;j<=10;j++)
 		printf("%d\t",i*j);
 	}
 	
	return 0;
}
