//02/10/2026
//Codeforces 1030A - Detect hard problem with early exit I/O termination

#include <cstdio>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int opinion;
        while (n--) {
            scanf("%d", &opinion);
            if (opinion == 1) {
                puts("HARD");
                return 0;
            }
        }
        puts("EASY");
    }
    return 0;
}