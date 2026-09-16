//16/09/2026
//Codeforces 236A - Count distinct characters using an integer bitmask and hardware popcount

#include <cstdio>
int main() {
    char s[105];
    if (scanf("%s", s) == 1) {
        int mask = 0;
        for (int i = 0; s[i] != '\0'; ++i) {
            mask |= (1 << (s[i] - 'a'));
        }
        if (__builtin_popcount(mask) & 1) {
            puts("IGNORE HIM!");
        } else {
            puts("CHAT WITH HER!");
        }
    }
    return 0;
}