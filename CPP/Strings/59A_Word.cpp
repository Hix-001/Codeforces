//23/09/2026
//Codeforces 59A - Change word case based on majority letter casing

#include <cstdio>

int main() {
    char s[105];
    if (scanf("%s", s) == 1) {
        int up = 0, len = 0;
        while (s[len] != '\0') {
            if (s[len] <= 'Z') {
                up++;
            }
            len++;
        }
        if (up * 2 > len) {
            for (int i = 0; i < len; ++i) {
                s[i] &= ~32;
            }
        } else {
            for (int i = 0; i < len; ++i) {
                s[i] |= 32;
            }
        }
        puts(s);
    }
    return 0;
}