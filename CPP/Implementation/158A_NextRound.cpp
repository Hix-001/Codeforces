//12/09/2026
//Codeforces 158A - Count participants with scores strictly positive and at least the k-th finisher's score

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (cin >> n >> k) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int threshold = a[k - 1];
        int advanced = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] >= threshold && a[i] > 0) {
                advanced++;
            }
        }

        cout << advanced << "\n";
    }

    return 0;
}