#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	   vector<int>temp(16);
	   
	   for(int i=0;i<16;i++) cin>>temp[i];
	   
	   vector<vector<int>>temp2;
	   for(int i=0;i<16;i++){
	       temp2.push_back({temp[i],i});
	   }
	   sort(temp2.begin(),temp2.end());
	   vector<int>ans(16,0);
	    for(int i=0;i<16;i++){
	        int currIndex = i;
	        int round = 1;
	        int win = 0;
	        int prevIndex = temp2[i][1];
	        while(currIndex  - round >=0) {
                win++;
                currIndex -= round;
                round*=2;
	        }
	        ans[prevIndex] = win;
	    }
       
        
       for(int i=0;i<16;i++) cout<<ans[i]<<" ";
       cout<<endl;
        
       
	}
	return 0;

}
