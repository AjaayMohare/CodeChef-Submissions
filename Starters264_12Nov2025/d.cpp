#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum+=a[i];
        }
        // left o to i-1 
        // right i+1 to n 
        // this is dp 
        int neg=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        int k=n/2;
        int j=n-1;
        for(int i=k;i>=1;i--){
            while(j>=2*i-1){
                pq.push(a[j]);
                j--;
            }
            neg+=pq.top();
            pq.pop();
        }
        int ans=sum-2*neg;
        cout << ans << endl;
    }
}
