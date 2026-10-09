//09/10/2026
//Codeforces 200B - Calculate average percentage using streaming integer accumulation

#include <cstdio>
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            int p;
            scanf("%d", &p);
            sum += p;
        }
        printf("%.12f\n", (double)sum / n);
    }
    return 0;
}