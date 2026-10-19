//19/10/2026
//Codeforces 344A - Count magnet groups via streaming adjacent comparisons

#include <cstdio>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int groups = 0;
        int prev = 0;
        
        while (n--) {
            int curr;
            scanf("%d", &curr);
            groups += (curr != prev);
            prev = curr;
        }
        
        printf("%d\n", groups);
    }
    return 0;
}