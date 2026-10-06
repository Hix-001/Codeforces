//06/10/2026
//Codeforces 116A - Calculate maximum tram capacity via streaming state accumulation

#include <cstdio>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int current = 0;
        int max_capacity = 0;
        
        while (n--) {
            int a, b;
            scanf("%d %d", &a, &b);
            current += b - a;
            if (current > max_capacity) {
                max_capacity = current;
            }
        }
        
        printf("%d\n", max_capacity);
    }
    return 0;
}
