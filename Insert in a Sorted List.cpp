//{ Driver Code Starts
//

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

// } Driver Code Ends
/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        if(data<=head->data){
            Node* dummy = new Node(-1);
            Node* temp=dummy;
            temp->next = new Node(data);
            temp=temp->next;
            temp->next=head;
            return dummy->next;
        }
        
        Node* dummy=new Node(-1);
        Node* temp=dummy;
        Node* temp1=head;
        while(temp1!=NULL){
            if(data>temp1->data){
                temp->next=new Node(temp1->data);
                temp=temp->next;
            }else{
                temp->next=new Node(data);
                temp=temp->next;
                temp->next=temp1;
                return dummy->next;
            }
            temp1=temp1->next;
        }
        temp->next=new Node(data);
        return dummy->next;
    }
};


//{ Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
        
		int data;
		cin>>data;
		
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		
		int k;
		cin>>k;
		Solution obj;
		head = obj.sortedInsert(head,k);
		printList(head); 
	}
	return 0; 
} 

// } Driver Code Ends
