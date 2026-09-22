//22/09/2026
//Codeforces 546A - Calculate banana costs using arithmetic progression sum

#include <cstdio>

int main() {
    long long k, n, w;
    if (scanf("%lld %lld %lld", &k, &n, &w) == 3) {
        long long total_cost = k * w * (w + 1) / 2;
        
        if (total_cost > n) {
            printf("%lld\n", total_cost - n);
        } else {
            puts("0");
        }
    }
    return 0;
}