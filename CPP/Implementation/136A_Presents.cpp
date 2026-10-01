//01/10/2026
//Codeforces 136A - Find the inverse permutation of gift givers

#include <cstdio>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int ans[105];
        for (int i = 1; i <= n; ++i) {
            int p;
            scanf("%d", &p);
            ans[p] = i;
        }
        for (int i = 1; i <= n; ++i) {
            printf("%d ", ans[i]);
        }
        printf("\n");
    }
    return 0;
}