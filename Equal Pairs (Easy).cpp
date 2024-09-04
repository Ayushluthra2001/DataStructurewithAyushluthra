#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t; 
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>temp(n,0);
	    for(int i =0;  i<n; i++) cin>>temp[i];
	    
	    int count = 0;
	    for(int i =0;i < n;i++) if(temp[i] == 0) count++;
	    int maxi = 0;
	    
	        unordered_map<int,int>mapping;
	        int maxiFreq=-1;
	        int element = -1;
	        for(int i =0;i<n;i++){
	            if(temp[i] != 0) mapping[temp[i]]++;
	        }
	        for(auto i : mapping){
	            if( i.second > maxiFreq) {
	                maxiFreq = i.second;
	                element = i.first;
	            }
	        }
	        
	        for(int i = 0;i < n; i++) if(temp[i] ==0) temp[i] = element;
	        int c =0;
	        for(int i =0;i <n;i++){
	            for(int j=i+1;j<n;j++){
	                if(temp[i] == temp[j]) c++;
	            }
	        }
	       // cout<<"Printing "<<" ";
	       // cout<<maxiFreq<<" "<<element<<endl;
	        
	       // cout<<"element are"<<" ";
	       // for(int i = 0;i<n;i++) cout<<temp[i]<<" ";
	       // cout<<endl;
	        
	        
	       
	        
	    
	   // cout<<"result is"<<maxi<<endl;
	   cout<<c<<endl;
	    
	}
	return 0;
}

