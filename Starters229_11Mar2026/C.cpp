#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<pair<int,int>> v;
	    for(int i=0;i<n;i++){
	        int val ;
	         cin>> val;
	         v.push_back({val,i+1});
	    }
	    sort(v.begin(),v.end());
	    if(v.back().first>=0){
	        int in = n;
	        if(v[in-1].first + v[in-2].first != v[n-3].first) {
	            cout << v[in-1].second << " " << v[in-2].second<< " " << v[n-3].second<< endl;
	        }
	        else cout << -1 << endl;
	        
	    }
	    else{
	        if(v[0].first + v[1].first != v[2].first) {
 cout << v[0].second << " "<< v[1].second << " "<< v[2].second<< endl;
	        }
	        else cout << -1 << endl;
	    }
	}

}
