#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--){
        int n,d;
        cin >> n >> d;
        vector<int> a(n),b(n);
        int t1=0;
        int t2=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            t1+=a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            t2+=b[i];
        }
        int t3=0;
        set<int> st;
        
        for(int i=0;i<n;i++){
            int mi = min(a[i],b[i]);
            // if(mi==a[i] && mi==b[i]) 
           if(mi==a[i]) st.insert(1);
        if(mi==b[i]) st.insert(2);
            t3+=mi;
        }
        cout << min({t1+d,t2+d,t3+(2*d)}) << endl;
        
    }
}
