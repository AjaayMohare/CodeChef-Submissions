
#include <bits/stdc++.h>
using namespace std;
#define l long long
int main() {
    int t;
    cin >> t;
    while(t--){
        l n;
        cin >> n;
        vector<l> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        vector<l> ac(n+1,0);
        l ans=0;
        l cur=0;

        for(int i=0;i<n-1;i++){
            cur+=ac[i];
            a[i]+=cur;

            l mv=min(a[i],n-i-1);
            ans+=mv;

            if(mv>0){
                ac[i+1]++;
                ac[i+mv+1]--;
            }
        }
        cout << ans << endl;
    }
}
