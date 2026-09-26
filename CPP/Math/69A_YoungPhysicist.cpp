//26/09/2026
//Codeforces 69A - Check equilibrium by streaming vector sums in O(1) space

#include <cstdio>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int sum_x = 0, sum_y = 0, sum_z = 0; 
        while (n--) {
            int x, y, z;
            scanf("%d %d %d", &x, &y, &z);
            sum_x += x;
            sum_y += y;
            sum_z += z;
        }
        if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
            puts("YES");
        } else {
            puts("NO");
        }
    }
    return 0;
}