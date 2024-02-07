#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int x;
        int y;
        cin>>x;
        cin>>y;
        int ans=min(y,(y/(x-1)));
        cout<<ans<<endl;
    }
    return 0;
	// your code goes here


}
