#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    int x , y , z;
	    cin>>x>>y>>z;
	    
	    int curr = x* y;
	    z = z * z;
	    if(z >= curr){
	        cout<<0<<endl;
	    }else{
	        int cost = 0;
	       if( x > y){
	           x = 1;
	           cost++;
	           if(x * y > z){
	               y = 1;
	               cost++;
	           }
	           cout<<cost<<endl;
	           
	       }else{
	           y = 1;
	           cost++;
	           if(x * y > z){
	               x = 1;
	               cost++;
	           }
	           cout<<cost<<endl;
	       }
	      
	    }
	}

}
