//19/09/2026
//Codeforces 791A - Calculate years until a triples past b's doubles

#include <cstdio>
int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        int years = 0;
        while (a <= b) {
            a *= 3;
            b *= 2;
            years++;
        }
        printf("%d\n", years);
    }
    return 0;
}