#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--){
	    int n;
	    cin >> n;

	    vector<int> a(n), b(n);

	    for(int i = 0; i < n; i++){
	        cin >> a[i] >> b[i];
	    }

	    int y = INT_MAX;

	    for(int i = 0; i < n; i++){
	        y = min(y, b[i]);
	        y = max(y, a[i]);
	    }

	    cout << y << endl;
	}
}
