//10/09/2026
//Codeforces 112A - Compare two strings lexicographically ignoring case

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    if (cin >> a >> b) {
        for (size_t i = 0; i < a.length(); ++i) {
            a[i] = tolower(a[i]);
            b[i] = tolower(b[i]);
        }
        
        if (a < b) {
            cout << "-1\n";
        } else if (a > b) {
            cout << "1\n";
        } else {
            cout << "0\n";
        }
    }

    return 0;
}