//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node *reverse(struct Node* head){
        if(head==NULL) return NULL;
        struct Node* prev=NULL;
        struct Node* curr=head;
        struct Node* forward=head;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node* dummy=new Node(-1);
        Node* temp=dummy;
        first=reverse(first);
        second=reverse(second);
        // struct Node* temp1 = first;
        // while(temp1!=NULL){
        //     cout<<temp1->data<<" ";
        //     temp1=temp1->next;
            
        // }
        // cout<<endl;
        // temp1 = second;
        // while(temp1!=NULL){
        //     cout<<temp1->data<<" ";
        //     temp1=temp1->next;
            
        // }
        // cout<<endl;
         int carry=0;
        while(carry>0 || first!=NULL || second!=NULL){
           
            int sum=0;
            sum+=carry;
            sum+= first!=NULL ? first->data : 0 ;
            sum+= second!=NULL ? second->data: 0 ;
            carry=sum/10;
            temp->next=new Node(sum%10);
            if(first!=NULL) first=first->next;
            if(second!=NULL )second=second->next;
            temp=temp->next;
        }
        temp=dummy->next;
        temp=reverse(temp);
        return temp;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends
