#include <stdio.h>
#include <string.h>

struct Address{
    int phoneNumber;
    char address[100];
};

struct User{
    int id;
    char name[20];
    char surname[20];
    int password;
    float bakiye;
    char email[50];
    struct Address address;
};

int main(){
    struct User u1;
    struct User u2;

    u1.id = 1;
    strcpy(u1.name, "batuhan");
    strcpy(u1.surname, "karadag");
    u1.password = 1234;
    u1.bakiye = 1000.0;
    strcpy(u1.email, "b@k.com");
    strcpy(u1.address.address, "iskenderun");
    u1.address.phoneNumber = 999;


    u2.id = 2;
    strcpy(u2.name, "arda");
    strcpy(u2.surname, "daskiran");
    u2.password = 4321;
    u2.bakiye = 500.0;
    strcpy(u2.email, "a@d.com");
    strcpy(u2.address.address, "hatay");
    u2.address.phoneNumber = 987;

    printf("ID: %d | Isim: %s %s | Email: %s | Adres: %s\n" , 
        u1.id, u1.name, u1.surname, u1.email, u1.address.address);

    printf("ID: %d | Isim: %s %s | Email: %s | Adres: %s" , 
        u2.id, u2.name, u2.surname, u2.email, u2.address.address);
}