//19/10/2026
//Codeforces 486A - Calculate alternating series sum in O(1) time using mathematical pairing

#include <cstdio>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n & 1) {
            printf("%lld\n", -(n + 1) / 2);
        } else {
            printf("%lld\n", n / 2);
        }
    }
    return 0;
}