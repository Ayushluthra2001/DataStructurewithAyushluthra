//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* node, int data);

// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

void inorder(Node* root, vector<int>& v) {
    if (root == NULL) return;

    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

int main() {

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);

        getline(cin, s);
        int k = stoi(s);
        // getline(cin, s);

        insert(root, k);
        vector<int> v;
        inorder(root, v);
        for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
        cout << endl;

        // cout<<"~"<<endl;
    }
    return 0;
}

// } Driver Code Ends


// Function to insert a node in a BST.

Node* createBinaryTree(vector<int>&ans,int start,int end){
    if(start>end) return NULL;
    int mid=(start+end)/2;
    
    Node* node = new Node(ans[mid]);
    node->left=createBinaryTree(ans,start,mid-1);
    node->right=createBinaryTree(ans,mid+1,end);
    return node;
}
void solve(Node* root,vector<int>&ans){
    if(root==NULL) return ;
    solve(root->left,ans);
    ans.push_back(root->data);
    solve(root->right,ans);
}
Node* insert(Node* root, int key) {
    
    vector<int>ans;
    solve(root,ans);
    if(find(ans.begin(),ans.end(),key)!=ans.end()) return root;
    
    ans.push_back(key);
    
    sort(ans.begin(),ans.end());
   
    int start=0,end=ans.size()-1;
    root= createBinaryTree(ans,start,end);
    return root;
    
}
