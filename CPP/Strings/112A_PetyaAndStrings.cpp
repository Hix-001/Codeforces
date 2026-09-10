//10/09/2026
//Codeforces 112A - Compare two strings lexicographically ignoring case

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    if (cin >> a >> b) {
        for (size_t i = 0; i < a.length(); ++i) {
            char ca = a[i] | 32;
            char cb = b[i] | 32;
            
            if (ca < cb) {
                cout << "-1\n";
                return 0;
            } else if (ca > cb) {
                cout << "1\n";
                return 0;
            }
        }
        cout << "0\n";
    }

    return 0;
}