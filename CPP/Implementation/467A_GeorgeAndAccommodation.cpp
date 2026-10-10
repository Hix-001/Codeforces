//11/10/2026
//Codeforces 467A - Count available rooms using branchless state accumulation

#include <cstdio>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int available_rooms = 0;
        while (n--) {
            int p, q;
            scanf("%d %d", &p, &q);
            available_rooms += (q - p >= 2);
        }
        printf("%d\n", available_rooms);
    }
    return 0;
}
