//12/09/2026
//Codeforces 1900A - Can we create an infinite water source using 3 consecutive empty cells?

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (s.find("...") != string::npos) {
        cout << 2 << "\n";
    } else {
        int count = 0;
        for (char c : s) {
            if (c == '.') {
                count++;
            }
        }
        cout << count << "\n";
    }
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