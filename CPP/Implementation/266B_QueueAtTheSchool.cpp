//11/10/2026
//Codeforces 266B - Simulate queue swapping using in-place array mutation

#include <cstdio>

int main() {
    int n, t;
    if (scanf("%d %d", &n, &t) == 2) {
        char s[55];
        scanf("%s", s);
        
        while (t--) {
            for (int i = 0; i < n - 1; ++i) {
                if (s[i] == 'B' && s[i + 1] == 'G') {
                    s[i] = 'G';
                    s[i + 1] = 'B';
                    ++i; 
                }
            }
        }
        
        printf("%s\n", s);
    }
    return 0;
}