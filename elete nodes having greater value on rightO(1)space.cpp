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
    Node* reverseList(Node* head){
        if(head==NULL) return NULL;
        Node* curr = head;
        Node* next = head->next;
        Node* prev = NULL;
        
        while(curr !=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            
        }
       
        return prev;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        
        head = reverseList(head);
        
        Node *temp = head;
        int maxi = head->data;
        while(temp->next!=NULL){
            if(temp->next->data<maxi){
                Node* temp2 = temp->next;
                temp->next = temp2->next;
                
            }else{
                temp = temp->next;
            }
            maxi = max(maxi,temp->data);
        }
        head = reverseList(head);
        return head;
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
