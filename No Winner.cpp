#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin>>t;
	while(t--){
	    int a, b, c, m;
	    cin>>a>>b>>c>>m;
	    
	    if(a == b || b==c || a== c){
	      
	        cout<<"YES"<<endl;
	    }else{
	        if(abs(c-a)<=m) cout<<"YES"<<endl;
	        else if(abs(c-b)<=m) cout<<"YES"<<endl;
	        else if(abs(a-b)<=m) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	}
	return 0;

}
