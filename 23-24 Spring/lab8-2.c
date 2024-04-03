#include <stdio.h>

struct Time{
    int hour;
    int minute;
    int second;
};

int main(){
    struct Time now = {11, 37, 44};

    printf("Şu an saat : %d:%d:%d\n", now.hour, now.minute, now.second);

}