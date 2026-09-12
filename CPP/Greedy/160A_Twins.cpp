//12/09/2026
//Codeforces 160A - Take minimum coins to achieve strictly greater than half the total sum

#include <cstdio>
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int count[101] = {0};
        int total_sum = 0;
        for (int i = 0; i < n; ++i) {
            int a;
            scanf("%d", &a);
            count[a]++;
            total_sum += a;
        }
        int my_sum = 0;
        int coins_taken = 0;
        for (int v = 100; v >= 1; --v) {
            while (count[v] > 0) {
                my_sum += v;
                coins_taken++;
                count[v]--;               
                if (my_sum > total_sum / 2) {
                    printf("%d\n", coins_taken);
                    return 0;
                }
            }
        }
    }
    return 0;
}