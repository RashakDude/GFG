// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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

struct Node* addTwoLists(struct Node* first, struct Node* second);

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
        
        Node* res = addTwoLists(first,second);
        printList(res);
    }
    return 0;
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

Node* reverse(Node *head) 
// this function reverses the linked list
{
    Node * prev = NULL;
    Node * current = head;
    Node * next;
    
    while (current != NULL) 
    { 
        next = current->next;     // storing next node
        current->next = prev;     // linking current node to previous
        prev = current;           // updating prev
        current = next;           // updating current
    }
    
    return prev; 
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    first = reverse(first);              // reversing lists
    second = reverse(second);            // to simplify addition
    
    Node *sum=NULL;
    int carry=0;
    
    while( first!=NULL || second!=NULL || carry!=0 )
    {
        int newVal = carry;
        if(first) newVal += first->data;
        if(second) newVal += second->data;
        // newly value for sumList is sum of carry and respective
        // digits in the 2 lists
        
        carry = newVal/10;               // updating carry
        newVal = newVal%10;              // making sure newVal is <10
        
        Node* newNode = new Node(newVal);
        newNode->next = sum;             // appending newVal node
        sum = newNode;
        
        if(first) first = first->next;     // moving to next node
        if(second) second = second->next;
    }
    
    return sum;
}
