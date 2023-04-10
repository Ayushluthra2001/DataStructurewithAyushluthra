//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	vector<vector<int>> vec = uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}

// } Driver Code Ends


/*You are required to complete this function*/
vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
//Your code here
int count=0;
unordered_map<string,int>mapping;
for(int i=0;i<row;i++){
    string str="";
    for(int j=0;j<col;j++){
        str+=to_string(M[i][j]);
    }
    if(mapping.find(str)==mapping.end()){
        mapping[str]=count++;
       
        
    }
}

vector<vector<int>>ans(mapping.size());

for(auto i : mapping){
    vector<int>temp;
    string str=i.first;
    for(int j=0;j<str.length();j++){
        temp.push_back(str[j]-'0');
    }
    ans[i.second]=temp;
}
return ans;
}
// mapping = 


// 10 3
// 0 0 1 0
// 1 1 0 1
// 1 0 1 2
// 1 1 1 3
// 0 1 0 4
// 0 0 0 5
