//18/09/2026
//Codeforces 339A - Sort arithmetic expression using counting sort

#include <cstdio>
int main() {
    char s[105];
    if (scanf("%s", s) == 1) {
        int c[4] = {0};
        for (int i = 0; s[i] != '\0'; i += 2) {
            c[s[i] - '0']++;
        }        
        bool first = true;
        for (int i = 1; i <= 3; ++i) {
            while (c[i]--) {
                if (!first) {
                    putchar('+');
                }
                putchar(i + '0');
                first = false;
            }
        }
        putchar('\n');
    }
    return 0;
}