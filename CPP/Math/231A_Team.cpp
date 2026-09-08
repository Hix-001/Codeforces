//08/09/2026
//Codeforces 231A - Count problems with at least 2 positive votes

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        int solved = 0;
        while (n--) {
            int a, b, c;
            cin >> a >> b >> c;
            
            if (a + b + c >= 2) {
                solved++;
            }
        }
        cout << solved << "\n";
    }

    return 0;
}