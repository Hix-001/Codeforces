//14/09/2026
//Codeforces 1896A - Check if first element is 1 to determine sortability

#include <cstdio>
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            int n;
            scanf("%d", &n);
            int first;
            scanf("%d", &first);
            for (int i = 1; i < n; ++i) {
                int dummy;
                scanf("%d", &dummy);
            }           
            if (first == 1) {
                puts("YES");
            } else {
                puts("NO");
            }
        }
    }
    return 0;
}