//08/09/2026
//Codeforces 1A - Calculate minimum flagstones using ceiling division

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, a;
    if (cin >> n >> m >> a) {
        long long x = (n + a - 1) / a;
        long long y = (m + a - 1) / a;
        
        cout << x * y << "\n";
    }

    return 0;
}