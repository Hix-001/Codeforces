//13/09/2026
//Codeforces 1899A - Determine game winner using modulo 3 invariant

#include <cstdio>
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            int n;
            scanf("%d", &n);
            if (n % 3 == 0) {
                puts("Second");
            } else {
                puts("First");
            }
        }
    }
    return 0;
}