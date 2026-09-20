//20/09/2026
//Codeforces 266A - Count adjacent identical characters to determine minimum removals

#include <cstdio>
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        char s[55];
        scanf("%s", s);
        int removed = 0;
        for (int i = 1; i < n; ++i) {
            if (s[i] == s[i - 1]) {
                removed++;
            }
        }
        printf("%d\n", removed);
    }
    return 0;
}