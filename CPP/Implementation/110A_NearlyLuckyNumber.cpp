//27/09/2026
//Codeforces 110A - Count lucky digits using branchless string processing

#include <cstdio>

int main() {
    char s[25];
    if (scanf("%s", s) == 1) {
        int count = 0;
        for (int i = 0; s[i] != '\0'; ++i) {
            count += (s[i] == '4') | (s[i] == '7');
        } 
        if (count == 4 || count == 7) {
            puts("YES");
        } else {
            puts("NO");
        }
    }
    return 0;
}