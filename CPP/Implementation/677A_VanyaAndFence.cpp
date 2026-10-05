//04/10/2026
//Codeforces 677A - Calculate total width using branchless boolean arithmetic

#include <cstdio>
int main() {
    int n, h;
    if (scanf("%d %d", &n, &h) == 2) {
        int total_width = 0;
        while (n--) {
            int a;
            scanf("%d", &a);
            total_width += 1 + (a > h);
        }
        printf("%d\n", total_width);
    }
    return 0;
}