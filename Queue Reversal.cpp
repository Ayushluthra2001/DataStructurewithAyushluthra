//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends


//function Template for C++

//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    // add code here.
    int size=q.size();
    
    vector<int>rev(size,0);
    size--;
    while(!q.empty()){
        rev[size]=q.front();
        q.pop();
        size--;
    }
    queue<int>a;
    for(int i=0;i<rev.size();i++){
        a.push(rev[i]);
    }
    return a;
}
