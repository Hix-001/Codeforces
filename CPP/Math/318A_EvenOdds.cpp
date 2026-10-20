//20/10/2026
//Codeforces 318A - Find sequence element via O(1) mathematical partitioning

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, k;
    if (cin >> n >> k) {
        long long odds_count = (n + 1) / 2;
        
        if (k <= odds_count) {
            cout << (k * 2) - 1 << "\n";
        } else {
            cout << (k - odds_count) * 2 << "\n";
        }
    }
    return 0;
}