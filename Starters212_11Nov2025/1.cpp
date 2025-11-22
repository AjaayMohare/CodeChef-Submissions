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
    int c=n;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            c=i;
            break;
        }
    }
    int ans=0;
    for(int i=c;i<n;i++){
        if(s[i]=='1'){
            ans++;
        }
    }
    cout << ans << endl;
}
}
