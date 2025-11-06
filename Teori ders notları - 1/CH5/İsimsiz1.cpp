#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int j;
int jokerBul();

int main()
{
	srand(time(NULL));
	int tas;
	int i,j,zar;
	
		zar = jokerBul();
		printf("joker: %d\n",zar);
		
		for(i=1;i<=4;++i)
		{
			for(j=1;j<=13;++j)
			{
				tas = 1 + rand() % 13;
				printf("%d.tas %d\n",j,tas);
				if(tas == zar)
				{
					printf("%d numarali oyuncu kazandi\n",i);
					break;
				}
			}
			printf("%d numarali oyuncu kazanamadi\n",i);
			
		}
	}


int jokerBul()
{
	int zar1 = 1 + rand() % 6;
	int zar2 = 1 + rand() % 6;
	int zar3 = 1 + rand() % 6;
	int joker;
	
	if (zar3 == 1)
	{
		joker = 1;
	}
	
	else if(zar3 == 6)
	{
		joker = 13;
	}
	
	else
	{
		joker = zar1 + zar2;
	}
	
	return joker;
	
}
