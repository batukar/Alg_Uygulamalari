#include <stdio.h>
#define INF 999999 // Sonsuz gibi büyük sayı

int min(int a, int b) {
    return (a < b) ? a : b;
}

int coinChange(int coins[], int n, int amount) {
    int dp[amount + 1];
    
    // Başlangıç: tüm değerleri sonsuz yap
    for (int i = 0; i <= amount; i++)
        dp[i] = INF;
        
    dp[0] = 0;  // 0 TL için hiç bozuk para gerekmez

    // DP tablosunu doldur
    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    return dp[amount];
}

int main() {
    int coins[] = {1, 3, 4};
    int n = sizeof(coins) / sizeof(coins[0]);
    int amount = 6;

    int result = coinChange(coins, n, amount);

    printf("Toplam %d TL'yi minimum %d adet bozuk parayla ödeyebiliriz.\n", amount, result);
    
    return 0;
}