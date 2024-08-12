#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int t;
    cin >> t;
 
 
    while (t--) {
        int n;
        cin>>n;
        int *arr = new int[n];
 
        for(int i=0; i<n; i++) cin>>arr[i];
 
        unordered_map<int,int>mapping;
        for(int i=0; i<n; i++) {
             mapping[arr[i]]++;
        }
 
 
 
        if((n-mapping.size()) % 2==0) cout<<mapping.size()<<endl;
        else cout<<mapping.size()-1<<endl;
 
 
 
    }
 
    return 0;
}
