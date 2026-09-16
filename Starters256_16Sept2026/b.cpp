#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        if(k==n) cout << "yes" << endl;
        else if(k==n-1) cout << "no" << endl;
        else cout << "yes" << endl;
    }
}
