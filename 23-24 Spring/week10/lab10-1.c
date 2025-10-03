// Bit ayarlama
unsigned int num = 10; // Örnek bir sayı (1010)
int pos = 2;            // Ayarlanacak bitin pozisyonu
num |= (1 << pos);      // 2. biti 1 olarak ayarla (1110)
// num |= (1 << pos)  === num = num | (1 << pos)

// Bit temizleme
unsigned int num = 10; // Örnek bir sayı (1010)
int pos = 3;            // Temizlenecek bitin pozisyonu
num &= ~(1 << pos);     // 3. biti 0 olarak temizle (0010)


// Bit ters çevirme
unsigned int num = 10; // Örnek bir sayı (1010)
int pos = 1;            // Ters çevrilecek bitin pozisyonu
num ^= (1 << pos);      // 1. bitin değerini tersine çevir (1000)


// Bit test etme
unsigned int num = 10; // Örnek bir sayı (1010)
int pos = 2;            // Test edilecek bitin pozisyonu
if (num & (1 << pos))   // 2. biti test et
    printf("2. bit 1\n");
else
    printf("2. bit 0\n");


// Sağa kaydırma
unsigned int num = 10; // Örnek bir sayı (1010)
int amount = 1;         // Kaydırılacak miktar
num >>= amount;         // Tüm bitleri bir sağa kaydır (0101)
// >>=   ====       > > =

// Sola kaydırma
unsigned int num = 10; // Örnek bir sayı (1010)
int amount = 2;         // Kaydırılacak miktar
num <<= amount;         // Tüm bitleri iki sola kaydır (101000)


// AND işlemi
unsigned int a = 10;   // 1010
unsigned int b = 6;    // 0110
unsigned int result = a & b;  // 0010


// OR işlemi
unsigned int a = 10;   // 1010
unsigned int b = 6;    // 0110
unsigned int result = a | b;  // 1110


// XOR işlemi
unsigned int a = 10;   // 1010
unsigned int b = 6;    // 0110
unsigned int result = a ^ b;  // 1100


// NOT işlemi
unsigned int a = 10;   // 0000 0000 0000 0000 0000 0000 0000 1010
unsigned int result = ~a;  // 1111 1111 1111 1111 1111 1111 1111 0101


