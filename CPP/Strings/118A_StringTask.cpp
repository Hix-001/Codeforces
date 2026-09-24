//24/09/2026
//Codeforces 118A - Process string by removing vowels and formatting consonants

#include <cstdio>

int main() {
    char s[105];
    if (scanf("%s", s) == 1) {
        for (int i = 0; s[i] != '\0'; ++i) {
            char c = s[i] | 32;
            if (!((1 << (c - 'a')) & 17842449)) {
                putchar('.');
                putchar(c);
            }
        }
        putchar('\n');
    }
    return 0;
}