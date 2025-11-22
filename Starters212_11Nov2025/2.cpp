#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    vector<pair<int,int>>p;
	    for(int i=0;i<n;i++){
	        cin >> v[i];
	        p.push_back({v[i],i});
	    }
	    sort(p.begin(),p.end());
	    int ans=0;
	    reverse(p.begin(),p.end());
	    for(int i=0;i<n;i++){
	        int l=0,r=0;
	        int in=p[i].second;
	        for(int j=0;j<in;j++){
	            if(p[i].first>v[j]){
	                l++;
	            }
	            
	        }
	        for(int j=in+1;j<n;j++){
	            if(p[i].first>v[j]){
	                r++;
	            }
	        }
	        ans+=min(l,r);
	    }
	    cout << ans << endl;
	    
	    
	    
	    }

}
