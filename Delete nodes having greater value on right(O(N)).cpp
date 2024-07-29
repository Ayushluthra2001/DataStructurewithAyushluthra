//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        vector<int>data;
        Node* temp = head;
        while(temp !=NULL){
            data.push_back(temp->data);
            temp = temp->next;
        }
        stack<int>st;
        int n = data.size();
       
        vector<int>result(n,-1);
        
        st.push(data[n-1]);
        
        for(int i=n-2;i>=0;i--){
            
            if(st.top()>data[i]){
                result[i] = st.top();
                st.push(data[i]);
            }else{
                while(!st.empty() && st.top()<=data[i]) st.pop();
                if(!st.empty()){
                    result[i] = st.top();
                    st.push(data[i]);
                }else{
                    st.push(data[i]);
                }
            }
        }
        
        
        // for(auto i : result) cout<<i<<" ";
        // cout<<endl;
        
        Node* dummy = new Node(-1);
        temp= dummy;
        for(int i=0;i<result.size();i++){
            if(result[i]==-1){ 
            temp ->next = new Node(data[i]);
            temp= temp->next;
                
            }
         }
        return dummy->next;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends
