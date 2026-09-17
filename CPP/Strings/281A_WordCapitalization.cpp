//17/09/2026
//Codeforces 281A - Capitalize the first letter using branchless bitwise operations

#include <cstdio>
int main() {
    char s[1005];
    if (scanf("%s", s) == 1) {
        s[0] &= ~32;
        puts(s);
    }
    return 0;
}