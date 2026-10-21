//21/10/2026
//Codeforces 133A - Detect output instructions in HQ9+ using early termination

#include <cstdio>

int main() {
    char p[105];
    if (scanf("%s", p) == 1) {
        for (int i = 0; p[i] != '\0'; ++i) {
            if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
                puts("YES");
                return 0;
            }
        }
        puts("NO");
    }
    return 0;
}