//09/09/2026
//Codeforces 282A - Calculate final value of x after increment and decrement operations

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (cin >> n) {
        int x = 0;
        while (n--) {
            string s;
            cin >> s;
            if (s[1] == '+') {
                x++;
            } else {
                x--;
            }
        }
        cout << x << "\n";
    }
    
    return 0;
}