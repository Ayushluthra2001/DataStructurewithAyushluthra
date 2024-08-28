#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ; 
	cin>>t;
	while(t--){
	    int sum = 0;
	    int n ;
	    cin>>n;
	    vector<int>temp(n,0);
	    for(int i = 0; i<n; i++) cin>>temp[i];
	    
	    
	    
	   int maxi = 0;
	   int currSum = 0;
	   int negative = 0;
	    int op = 0;
	  for(int i = 0;i < n; i++){
	     sum += temp[i];
	    
	  }
	  int left = -1;
	  int right = -1;
	 for(int i = 0;i < n; i++){
	     if(temp[i] > 0){
	         left = i;
	         break;
	     }
	 }
	 for(int j = n-1;j>=0;j--){
	     if(temp[j] > 0 ) {
	         right =j;
	         break;
	     }
	 }
	 for(int i = left ;i<=right;i++){
	     if(temp[i] < 0) op++;
	 }
	 
	 if(left!=right)
	 cout<<op<<endl;
	 else cout<<0<<endl;
	}
	
	return 0 ;


}
