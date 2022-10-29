//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle=INT_MAX;
    stack<int> st;
    public:
    int getMin()
    {
        if(st.empty())
            return -1;
        return minEle;
    }
       
       /*returns poped element from stack*/
    int pop()
    {
        int ans;
        if(st.empty())
            ans= -1;
        else 
        {
            if(st.top()>=minEle)
            {
                ans= st.top();
                st.pop();
            }
            else if(st.top()<minEle)
            {
                ans=minEle;
                minEle= (2*ans-st.top());
                st.pop();
            }
        }
        return ans;
           //Write your code here
    }
       
       /*push element x into the stack*/
    void push(int x)
    {
        if(st.empty())
        {
            minEle = x;
            st.push(x);
        }
        else
        {
            if(x<minEle)
            {
                st.push(2*x - minEle);
                minEle=x;
            }
            else
            {
                st.push(x);
            }
        }
    }

};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends
