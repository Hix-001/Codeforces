//03/10/2026
//Codeforces 41A - Verify reversed string using fast C-style array bounds checking

#include <cstdio>
int main() {
    char s[105], t[105];
    if (scanf("%s %s", s, t) == 2) {
        int len_s = 0;
        while (s[len_s] != '\0') {
            len_s++;
        }        
        int len_t = 0;
        while (t[len_t] != '\0') {
            len_t++;
        }        
        if (len_s != len_t) {
            puts("NO");
            return 0;
        }        
        for (int i = 0; i < len_s; ++i) {
            if (s[i] != t[len_s - 1 - i]) {
                puts("NO");
                return 0;
            }
        }        
        puts("YES");
    }
    return 0;
}