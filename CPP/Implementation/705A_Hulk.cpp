//22/10/2026
//Codeforces 705A - Generate alternating string sequence using direct I/O streaming

#include <cstdio>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        for (int i = 1; i <= n; ++i) {
            if (i & 1) {
                printf("I hate");
            } else {
                printf("I love");
            }
            
            if (i == n) {
                printf(" it");
            } else {
                printf(" that ");
            }
        }
        printf("\n");
    }
    return 0;
}