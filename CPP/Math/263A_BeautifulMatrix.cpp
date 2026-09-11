//11/09/2026
//Codeforces 263A - What is the Manhattan distance from the target to the center of the grid?

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            int x;
            cin >> x;
            if (x == 1) {
                cout << abs(i - 3) + abs(j - 3) << "\n";
                return 0;
            }
        }
    }

    return 0;
}