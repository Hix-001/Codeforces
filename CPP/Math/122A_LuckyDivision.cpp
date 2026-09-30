//30/09/2026
//Codeforces 122A - Check divisibility using an optimized hardcoded array of lucky numbers

#include <cstdio>
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
        for (int i = 0; i < 14; ++i) {
            if (n % lucky[i] == 0) {
                puts("YES");
                return 0;
            }
        }
        puts("NO");
    }
    return 0;
}