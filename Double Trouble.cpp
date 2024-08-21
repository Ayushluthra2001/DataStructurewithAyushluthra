#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n; 
	    cin>>n;
	    vector<long long >temp(n);
	    int k;
	    cin>>k;
	    for(int i = 0; i<n; i++) cin>>temp[i];
	    long long mod = 1e9+7;
	    priority_queue<long long , vector<long long>,greater<long long>>pq;
	    for(int i = 0;i<n;i++) pq.push(temp[i]);
	    
	    while(k--){
	        long long top = pq.top();
	        pq.pop();
	        long long newEl = (top*2);
	        
	        pq.push(newEl);
	        
	    }
	    long long minSum = 0;
	    while(!pq.empty()){
	        long long x=pq.top();
	        pq.pop();
	        minSum = (minSum + x) %mod;
	    }
	    cout<<minSum<<endl;
	}

}
