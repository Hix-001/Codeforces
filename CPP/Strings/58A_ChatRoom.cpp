//08/10/2026
//Codeforces 58A - Subsequence matching using a branchless state machine

#include <cstdio>
int main() {
    char s[105];
    if (scanf("%s", s) == 1) {
        const char* target = "hello";
        int j = 0;        
        for (int i = 0; s[i] != '\0'; ++i) {
            j += (s[i] == target[j]);
        }
        
        if (j == 5) {
            puts("YES");
        } else {
            puts("NO");
        }
    }
    return 0;
}