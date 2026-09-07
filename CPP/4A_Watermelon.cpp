/*
07/09/2026
Easy
Watermelon
Codeforces 4A - Watermelon: Check if a given weight w (1 <= w <= 100) 
                can be divided into two positive even integer parts.
*/

#include <iostream>
using namespace std;
int main() {
    int w;
    cin >> w;
    if (w > 2 && w % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}