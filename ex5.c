/*
    “switch” yapısı kullanılarak, kullanıcıdan bir ay numarası alın (1-12 aralığında). 
            Ardından bu numaraya karşılık gelen ayın, kaç gün süreceğini ekrana yazdıran bir program yazın. 
            (Örnek: 3 girildiğinde, “bu ay 31 gün sürer” yazılmalı.)
*/

#include <stdio.h>

int main(){
 
  int month;

  printf("Ay numarasi girin: ");
  scanf("%d", &month);

  switch (month)
  {
  case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    printf("Bu ay 31 gun surmektedir.");
    break;
  case 2:
    printf("Bu ay 28 gun surmektedir. 4 yilda bir 29 gun surmektedir.");
    break;
  case 4: case 6: case 9: case 11:
    printf("Bu ay 30 gun surmektedir.");
    break;
  default:
    printf("Gecersiz islem");
    break;
  }
    
}