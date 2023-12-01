#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int t;
    //cin>>t;

    //while(t--)
    //{

        int n;
        cin>>n;
        vector<string >ans(n,"");
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if("Tetrahedron"==ans[i]){
                sum+=4;
            }else if("Cube"==ans[i]){
                sum+=6;

            }else if("Octahedron"==ans[i]){
                sum+=8;

            }else if("Dodecahedron"==ans[i]){
                sum+=12;
            }
            else{
                    sum+=20;a
            }
        }
        cout<<sum<<endl;
    //}
    return 0;
}
