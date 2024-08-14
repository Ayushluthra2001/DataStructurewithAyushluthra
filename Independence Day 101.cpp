#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int t;
    cin>>t;
    while(t--){
        int a , b ,c;
        cin>>a>>b>>c;
        int maxi = max(a,max(b,c));
        int x  = (a + b + c ) - maxi;
        if( maxi <= x +1 ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
    
    return 0;
}

