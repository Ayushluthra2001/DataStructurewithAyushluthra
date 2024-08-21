#include <bits/stdc++.h>
using namespace std;

// bool solve(int x, int y , int)
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n , x,  y;
	    cin>>n>>x>>y;
	    string s;
	    cin>>s;
	    int x1 = 0;
	    int y1 = 0;
	    bool find = false;
	    for(int i = 0; i<s.length() ;i++){
	        if(s[i]=='R'){
	            x1+=1;
	        }else if(s[i]=='D'){
	            y1-=1;
	        }else if(s[i]=='U'){
	            y1+=1;
	        }else{
	            x1-=1;
	        }
	         int move1 = abs(x1-x);
	    int move2 = abs(y1-y);
	    
	    
	    if(move1 + move2 <= i+1  && (move1 + move2)%2== (i+1)%2 ){
	         find = true;
	         break;
	    }
	        
	        
	    }
	    if(find ) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	    
	   
	    
	   
	}
    return 0;
}
