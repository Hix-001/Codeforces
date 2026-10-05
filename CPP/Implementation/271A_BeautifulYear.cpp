//05/10/2026
//Codeforces 271A - Find next year with strictly distinct digits

#include <cstdio>

int main() {
    int y;
    if (scanf("%d", &y) == 1) {
        while (true) {
            y++;
            int a = y / 1000;
            int b = (y / 100) % 10;
            int c = (y / 10) % 10;
            int d = y % 10;
            
            if (a != b && a != c && a != d && b != c && b != d && c != d) {
                printf("%d\n", y);
                break;
            }
        }
    }
    return 0;
}