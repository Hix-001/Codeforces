//23/10/2026
//Codeforces 61A - Ultra-Fast Mathematician - Fast XOR with branchless ASCII arithmetic

#include <cstdio>

int main() {
    char s1[105], s2[105];
    if (scanf("%s %s", s1, s2) == 2) {
        for (int i = 0; s1[i] != '\0'; ++i) {
            putchar((s1[i] ^ s2[i]) + '0');
        }
        putchar('\n');
    }
    return 0;
}
