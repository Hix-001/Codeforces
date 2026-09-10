//10/09/2026
//Codeforces 1901A - What is the minimum gas tank volume required for the round trip?

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = a[0];
    for (int i = 1; i < n; ++i) {
        ans = max(ans, a[i] - a[i - 1]);
    }
    ans = max(ans, 2 * (x - a[n - 1]));
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}