#include <stdio.h>

unsigned int bitSet(){
    unsigned int num = 10;
    int pos = 2;
    num |= (1 << pos);

    return num;
}

unsigned int clearBit(){
    unsigned int num = 10;
    int pos = 3;
    num &= ~(1 << pos);  // ~ -> tilda

    return num;
}

unsigned int toogleBit(){
    unsigned int num = 10;
    int pos = 1;
    num ^= (1 << pos);

    return num;
}

void testBit(){
    unsigned int num = 10;
    int pos = 2;
    if(num & (1 << pos))
        printf("Bit testi: 2. Bit 1'dir.\n");
    else
        printf("Bit testi: 2. Bit 0'dır.\n");
}

unsigned int leftRotation(){
    unsigned int num = 10;
    int amount = 2;
    num <<= amount;

    return num;
}

unsigned int rightRotation(){
    unsigned int num = 10;
    int amount = 1;
    num >>= amount;

    return num;
}

unsigned int and(){
    unsigned int a = 10;
    unsigned int b = 6;
    unsigned int result = a & b;

    return result;
}

unsigned int or(){
    unsigned int a = 10;
    unsigned int b = 6;
    unsigned int result = a | b;

    return result;
}

unsigned int xor(){
    unsigned int a = 10;
    unsigned int b = 6;
    unsigned int result = a ^ b;

    return result;
}

unsigned int not(){
    unsigned int a = 10;
    unsigned int result = ~a;

    return result;
}

int main(){
    unsigned int resultBitSet = bitSet();
    unsigned int resultClearBit = clearBit();
    unsigned int resultToogleBit = toogleBit();
    unsigned int resultLeftRotation = leftRotation();
    unsigned int resultRightRotation = rightRotation();
    unsigned int resultAND = and();
    unsigned int resultOR = or();
    unsigned int resultXOR = xor();
    unsigned int resultNOT = not();

    printf("Bit ayarlama: %u\n", resultBitSet);
    printf("Bit temizleme: %u\n", resultClearBit);
    printf("Bit tersleme: %u\n", resultToogleBit);
    testBit();
    printf("Sola kaydırma: %u\n", resultLeftRotation);
    printf("Sağa kaydırma: %u\n", resultRightRotation);
    printf("AND işlemi: %u\n", resultAND);
    printf("OR işlemi: %u\n", resultOR);
    printf("XOR işlemi: %u\n", resultXOR);
    printf("NOT işlemi: %u\n", resultNOT);
    
}