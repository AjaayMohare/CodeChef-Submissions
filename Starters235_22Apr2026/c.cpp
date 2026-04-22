#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        vector<int> m(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            m[v[i]]++;
        }

        vector<int> pr(n + 1, 0);

        pr[0] = 0;
        for (int i = 1; i <= n; i++) {
            pr[i] = pr[i - 1];
            if (m[i - 1] == 0) pr[i]++;
        }

        for (int k = 0; k <= n; k++) {
            int miss = pr[k];
            int ans = max(miss, m[k]);
            cout << ans << " ";
        }

        cout << endl;
    }

}
