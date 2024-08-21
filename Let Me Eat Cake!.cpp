#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int ans = 0;
	    int n ,m;
	    cin>>n>>m;
	    
	    while(m>0 && n>0 && m!=n){
	        if(m > n){
	            int x = m/2;
	            ans += m - x;
	            m = x;
	        }else{
	            int x=  n / 2;
	            ans += n-x;
	            n = x;
	        }
	    }
	    cout<<ans<<endl;
	}
	
	return 0;

}
