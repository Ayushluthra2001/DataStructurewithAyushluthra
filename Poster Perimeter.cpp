#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a, b, c;
	    cin>>a>>b>>c;
	    
	    int mini = INT_MAX;
	    for(int i = 1;i<=a;i++){
	        for(int j = 1;j<=b;j++){
	            int area = 2 * (i+j);
	            mini = min(mini , abs(area- c));
	        }
	    }
	    cout<<mini<<endl;
	}
	return 0;

}
