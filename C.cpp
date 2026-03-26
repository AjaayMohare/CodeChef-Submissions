#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k, vector<int> a, vector<int> b) {
    int an = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            int mv = max(a[i], a[j]);
            int miv = min(a[i], a[j]);

            int c = miv + mv - min(mv / 2, 100);

            if (c <= k) {
                an = max(an, b[i] + b[j]);
            }
        }
    }

    return an;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        cout << solve(n, k, a, b) << endl;
    }

    return 0;
}
        
