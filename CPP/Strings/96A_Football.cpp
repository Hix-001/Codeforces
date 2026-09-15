//15/09/2026
//Codeforces 96A - Detect a sequence of 7 consecutive identical characters

#include <cstdio>
int main() {
    char s[105];
    if (scanf("%s", s) == 1) {
        int streak = 1;
        for (int i = 1; s[i] != '\0'; ++i) {
            if (s[i] == s[i - 1]) {
                streak++;
                if (streak == 7) {
                    puts("YES");
                    return 0;
                }
            } else {
                streak = 1;
            }
        }
        puts("NO");
    }
    return 0;
}