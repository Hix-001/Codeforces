//25/09/2026
//Codeforces 977A - Apply special subtraction rules k times using modulo chunking

#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) == 2) {
        while (k > 0) {
            int rem = n % 10;
            if (rem == 0) {
                n /= 10;
                k--;
            } else {
                int step = min(rem, k);
                n -= step;
                k -= step;
            }
        }
        printf("%d\n", n);
    }
    return 0;
}