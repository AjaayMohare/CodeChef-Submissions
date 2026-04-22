#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    bool ans = true;
	    int i=0,j=n-1;
	    while(i<j){
	        if(s[i]=='?' && s[j]=='?') ans=false;
	        i++;
	        j--;
	    }
	    if (n % 2 == 1 && s[n / 2] == '?') ans = false;
	    if(ans) cout << "yes" << endl;
	    else cout << "no" << endl;
	    
	}
	

}
