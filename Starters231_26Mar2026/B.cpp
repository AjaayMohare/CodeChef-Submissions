#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int> &v){
    sort(v.begin(),v.end());
    map<int,int> m;
    int mx = v.back();
    for(int i=0;i<v.size();i++){
        if(v[i]<mx){
            if(m.count(v[i])) return false;
            else m[v[i]]++;
        }
    }
    return true;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    
	    for(int i=0;i<n;i++) cin >> v[i];
	    if(solve(v)) cout << "yes" << endl;
	    else cout << "no" << endl;
	}

}
