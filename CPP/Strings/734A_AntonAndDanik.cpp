//28/09/2026
//Codeforces 734A - Count majority characters using branchless ASCII bit extraction

#include <cstdio>
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        char s[100005];
        scanf("%s", s);
        int anton = 0;
        for (int i = 0; i < n; ++i) {
            anton += (s[i] & 1);
        }
        anton <<= 1;
        if (anton > n) {
            puts("Anton");
        } else if (anton < n) {
            puts("Danik");
        } else {
            puts("Friendship");
        }
    }
    return 0;
}