#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int a , b;
	    cin>>a>>b;
	    
	    int maxi = max(a, b);
	    int mini = min(a , b);
	    int xx = mini - (maxi / 2);
	    int yy = 2 * mini - maxi;
	    xx = max(0 ,xx);
	    yy = max(0 , yy);
	    
	    cout<<min(xx ,yy)<<endl;
	}
    
    return 0;
}
