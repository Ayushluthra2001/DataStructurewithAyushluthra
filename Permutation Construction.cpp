#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int start = 1;
	    int end = n;
	    
	    vector<int>ans(n);
	    bool flag = false;
	    
	    for(int i=0;i<n;i++){
	        if(flag) ans[i]=start++;
	        else ans[i] = end--;
	        flag = !flag;
	    }
	    for(auto i : ans) cout<<i<<" ";
	    cout<<endl;
	}
	return 0;

}


