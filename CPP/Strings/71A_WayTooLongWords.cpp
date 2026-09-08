//07/09/2026
//Codeforces 71A - Abbreviate words strictly longer than 10 characters

#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (cin >> n) {
        while (n--) {
            string s;
            cin >> s;
            int len = s.length();
            
            if (len > 10) {
                cout << s[0] << len - 2 << s[len - 1] << "\n";
            } else {
                cout << s << "\n";
            }
        }
    }
    return 0;
}