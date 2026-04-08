#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m; 
        cin >> n >> m;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int  p = (n - m + 1) / 2;

        int l = p - 1;
        int r = n - ((n - m) - p) - 1;
        set<int> s;
        for(int i = l; i <= r; i++){
            if(!s.count(v[i]))cout << v[i] << " ";
            s.insert(v[i]);
        }
        cout << endl;
    }
}
