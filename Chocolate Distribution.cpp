#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	
	cin>>n;
	for(int i=0;i<n;i++){
	    int k;
	    cin>>k;
	    int x;
	    if(k%2!=0) x=k+1;
	    else x=k;
	    cout<<x/2<<" "<<k<<endl;
	}
	

}
