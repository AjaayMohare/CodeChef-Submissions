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
        int ans=0;
        char bk = s.back();
        reverse(s.begin(),s.end());
        s.push_back(bk);
        reverse(s.begin(),s.end());
        for(int i=n;i>=1;i--){
            int b1 = s[i]-'0';
            int  b2 = s[i-1]-'0';
             int val = b2*10;
             val+=b1;
             if(val%4==0) ans++;
        }
        cout << ans << endl;
    }
}
