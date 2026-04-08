#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m,a,b,c;
        cin >> n >> m >> a >> b >> c ;
        
        if(n>m)cout << min(n*a + m*b , abs(n-m)*a + m*c) << endl;
        else cout << min(n*a + m*b , abs(n-m)*b + n*c) << endl;
        
    }
}
