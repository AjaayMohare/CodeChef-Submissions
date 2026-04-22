#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        vector<int> l(n,0) , r(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(v[j]<v[i]) l[i]++;
            }
            for(int j=n-1;j>i;j--){
                if(v[j]>v[i]) r[i]++;
            }
        }
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(l[i]==r[i]) cnt++;
        }
        cout <<  cnt << endl;
    }
}
