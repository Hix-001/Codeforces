//12/09/2026
//Codeforces 50A - Calculate maximum domino capacity using total area bit-shifting

#include <cstdio>
int main() {
    int m, n;
    if (scanf("%d %d", &m, &n) == 2) {
        printf("%d\n", (m * n) >> 1);
    }
    return 0;
}