#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        vector<long long> pr;
        pr.push_back(0);
        long long ans = LLONG_MIN;
        for(auto i : v) pr.push_back(pr.back()+i);
        for(int i=1;i<pr.size();i++){
            long long  ls = pr[i];
            long long rs = pr.back() - pr[i];
            long long lc = i;
            long long rc = n-i;
            ans =max(ans,1LL*ls*rc + 1LL*rs*lc);
        }
        cout << ans << endl;
    }
}
