#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(c%3==0){
            int di = c/3;
            if(di>b){
                cout << "No" << endl;
            }
            else{
                b-=di;
                if(b%2==0){
                    int op = b/2;
                    if(op==a) cout << "Yes" << endl;
                    else cout << "No" << endl;
                }
                else{
                    cout << "no" << endl;
                }
            }
        }
        else{
            cout << "No" << endl;
        }
    }
}
