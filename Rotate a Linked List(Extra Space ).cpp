//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        vector<int>list;
        
        Node* temp=head;
        while(temp!=NULL){
            list.push_back(temp->data);
            temp=temp->next;
        }
        vector<int>rotate(list.size(),0);
        for(int i=0;i<list.size();i++){
            rotate[i]=list[(i+k)%list.size()];
        }
        Node* dummy= new Node(-1);
        temp=dummy;
        for(int i=0;i<list.size();i++){
            temp->next=new Node(rotate[i]);
            temp=temp->next;
        }
        return dummy->next;
    }
};
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends
