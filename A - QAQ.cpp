#include <iostream>
#include <vector>
 
using namespace std;
 
 
void solve(int &count ,string s1 , string s2, int i , int j){
if(i>=s1.length() || j>=s2.length()){
        if(j==s2.length()) count++;
 
 
 
    return;
}
 
    if(s1[i] == s2[j]){
        solve(count,s1,s2,i+1,j+1);
        solve(count,s1,s2,i+1,j);
    }else{
        solve(count,s1,s2,i+1,j);
    }
 
}
int main() {
    int t;
    //cin >> t;
    t=1;
 
    while (t--) {
        string s1;
        cin>>s1;
        string s2 = "QAQ";
        int count =0;
 
        solve(count,s1,s2,0,0);
        cout<<count<<endl;
    }
 
    return 0;
}
