//22/10/2026
//Codeforces Games on the Train - Minimum bound equalization using running extrema

#include <cstdio>

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            int n;
            scanf("%d", &n);
            
            int max_h = 0;
            int min_h = 10;
            
            for (int i = 0; i < n; ++i) {
                int h;
                scanf("%d", &h);
                if (h > max_h) max_h = h;
                if (h < min_h) min_h = h;
            }
            
            printf("%d\n", max_h - min_h + 1);
        }
    }
    return 0;
}