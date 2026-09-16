#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin >> v[i];
            m[v[i]]=i;
        }
        // m[0] = -1; m[n+1]=n+1;
        // vector<int> l(n+1),h(n+1);
        // for(int i=1;i<=n;i++){
        //     // if(i==1){
        //     //     l[i]=0;
                
        //     // }
        //     // else if(i==n){
        //     //     h[i]=1;
        //     // }
        //     int le = i-1;
        //     int hi = i+1;
        //     if(m[le]<m[i]) l[i]=1;
        //     else l[i]=0;
        //     if(m[hi]<m[i]) h[i]=1;
        //     else h[i]=0;
        // }
        // for(auto i : l) cout << i << " ";
        // cout << endl;
        // for(auto i : h) cout << i << " ";
        // cout << endl;
        // int p=1,i=1;
        // int f = 0;
        // int ln = 0;
        // // while(true ){
        // //     if(f==0){
        // //         while(l[i]==0) i++;
        // //         for(int j= i;j>ln;j--) cout << j << " ";
        // //         f=1;
        // //         ln=i;
        // //         p=i+1;
        // //     }
        // //     else{
        // //         while(h[i]==0) i++;
        // //         for(int j= i;j>ln;j--) cout << j << " ";
        // //         f=0;
        // //         ln=i;
                
        // //     }
        // //     if(ln>n) break;
        // // }
        // cout << endl;
        while(true){
            vector<int> cr = v;
            for(int i=0;i<n-1;i++){
                if(abs(v[i]-v[i+1])>1 && v[i]>v[i+1]){
                    int v1 = v[i],v2=v[i+1];
                    v[i]=v2;
                    v[i+1]=v1;
                }
            }
            if(cr==v) break;
            
        }
        for(auto i : v) cout << i << " ";
        cout << endl;
    }
}c
