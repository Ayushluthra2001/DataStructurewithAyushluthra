#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    bool num=false,up=false,low=false;
	    for(int i=0;i<s.length();i++){
	        if(isalpha(s[i])){
	            if(islower(s[i])) low=true;
	            else up=true;
	        }else if(isdigit(s[i])) num=true;
	    }
	    if(num && up && low) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	
	return 0;
}
