// ic ice for dongusu

#include <stdio.h>

int main(){

int count;

printf("kac satir icin islem yapmak istiyorsunuz: ");
scanf("%d", &count);

int i, j;

for ( i = 1; i <= count; i++)
{
  for ( j = count; j >= i; j--)
  {
    printf("* ");
  }
    printf("\n");
}

}
