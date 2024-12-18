#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>data(n,0);
	    for(int i = 0; i<n; i++){
	        cin>>data[i];
	    }
	    sort(data.begin(),data.end());
	    int counter = 0;
	    int sum = 0;
	    for(int i = 0; i<data.size();i++){
	        data[i]-=counter;
	        if(data[i]<0) data[i] = 0;
	        sum+=data[i];
	        counter++;
	        
	        
	    }
	   // cout<<"Hello";
	    cout<<sum<<endl;
	}
	return 0;

}
