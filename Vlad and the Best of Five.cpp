#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int counta=0,countb=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A') counta++;
            else countb++;
        }
        if(counta>countb)cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }

}
