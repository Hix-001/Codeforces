//Number Theory
//07/10/2026
//Codeforces B - Minus Two - Modulo 4 phase synchronization

#include <cstdio>

inline int max3(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            int n;
            scanf("%d", &n);            
            int freq[4] = {0, 0, 0, 0};
            for (int i = 0; i < n; ++i) {
                int a;
                scanf("%d", &a);
                freq[a & 3]++;
            }
            int odds = freq[1] + freq[3];
            int ans = max3(odds, freq[0], freq[2]);
            
            printf("%d\n", ans);
        }
    }
    return 0;
}