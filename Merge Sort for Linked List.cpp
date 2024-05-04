//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    void merge(vector<int>& data, int start ,int end){
        vector<int>left;
        vector<int>right;
        int mid=(start+end)/2;
        int n1=mid-start+1;
        int n2=end-mid;
        int k=start;
    
        for(int i=0;i<n1;i++){
            left.push_back(data[k++]);
        }
        k=mid+1;
        for(int i=0;i<n2;i++){
            right.push_back(data[k++]);
        }
    
        
        
        int i=0,j=0;
        k=start;
        while( i<left.size() && j< right.size()){
            if(left[i]<right[j]){
                data[k++]=left[i++];
            }else{
                data[k++]=right[j++];
            }
        }
        
        
        while(i<n1){
            data[k++]=left[i++];
        }
        while(j<n2){
            data[k++]=right[j++];
        }
        return ;        
    }
    void mergeSort(vector<int>& data,int start,int end){
        if(start>=end) return ;
       
        int mid=(start+end)/2;
        mergeSort(data,start,mid);
        mergeSort(data,mid+1,end);
        merge(data,start,end);
    }
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        vector<int>data;
        Node* temp=head;
        while(temp!=NULL){
         
            data.push_back(temp->data);
            temp = temp->next;
        }
       
        
        mergeSort(data,0,data.size()-1);
        
        Node* dummy = new Node(-1);
        
        temp=dummy;
        for(int i=0; i<data.size(); i++){
            temp->next = new Node(data[i]);
            temp = temp->next;
            
        }
        
        
        
        
        return dummy->next; 
        
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends
