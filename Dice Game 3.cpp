#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   int sum=0;
	   if(n%2!=0) sum+=6;
	   
	   sum+=n/2*12;
	   sum+=n/2;
	   cout<<sum<<endl;
	}
	

}
