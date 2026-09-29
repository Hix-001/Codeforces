//29/09/2026
//Codeforces 1360B - Sort athletes to minimize adjacent strength differences

#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            int n;
            scanf("%d", &n);
            int a[55];
            for (int i = 0; i < n; ++i) {
                scanf("%d", &a[i]);
            }
            sort(a, a + n);
            int min_diff = 2000;
            for (int i = 1; i < n; ++i) {
                int diff = a[i] - a[i - 1];
                if (diff < min_diff) {
                    min_diff = diff;
                    if (min_diff == 0) {
                        break;
                    }
                }
            }
            printf("%d\n", min_diff);
        }
    }
    return 0;
}