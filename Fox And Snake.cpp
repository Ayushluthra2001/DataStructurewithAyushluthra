#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int t;
    //cin>>t;

    //while(t--)
    //{
    int n,m;
    cin>>n>>m;
    bool flag=true;
    bool done =true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){
                cout<<"#";
            }else {
            if(flag && j==m-1 && done){
                cout<<"#";
                flag=!flag;
                done =false;
            }
            else if(!flag && j==0 && done){
                cout<<"#";
                flag=!flag;
                done =false;
            }else{
                cout<<".";
            }

            }
        }
        done =true;
        cout<<endl;
    }

    //}
    return 0;
}
