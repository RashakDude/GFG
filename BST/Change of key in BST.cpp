// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node
{
	int key;
	struct node *left;
	struct node *right;
	
	node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};

void inorder(struct node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d ", root->key);
		inorder(root->right);
	}
}

struct node* insert(struct node* root, int key)
{

	if (root == NULL) return (new node(key));
	if (key < root->key)
		root->left = insert(root->left, key);
	else
		root->right = insert(root->right, key);
	return root;
}

// Function to change a key value in Binary Search Tree
struct node *changeKey(struct node *root, int oldVal, int newVal);

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        struct node *root = NULL;
        int n, temp, oldKey, new_key;
        cin>>n;
        while(n--)
        {
            cin>>temp;
            root = insert(root, temp);
        }
        cin>>oldKey;
        cin>>new_key;
        root = changeKey(root, oldKey, new_key);
        inorder(root);
        printf("\n");
    }
	return 0;
}


// } Driver Code Ends


/*
Structure of the binary Search Tree is as
struct node
{
	int key;
	struct node *left, *right;
};
*/
// your task is to complete the Function
// Function is used to change a key value in the given BST
// Note: Function should return root node to the new modified BST
void in(struct node*r,vector<int>&v,int o,int n) {
    if(r) {
        in(r->left,v,o,n);
        if(r->key==o) v.push_back(n);
        else v.push_back(r->key);
        in(r->right,v,o,n);
    }
}

int i;
void it(struct node*r,vector<int>v) {
    if(r) {
        it(r->left,v);
        r->key=v[i++];
        it(r->right,v);
    }
}

struct node *changeKey(struct node *root, int o, int n){
	// Code here
	vector<int>v;
	in(root,v,o,n);
	sort(v.begin(),v.end());
	i=0;
	it(root,v);
	return root;
}