// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// class Queue
class Queue{
    
    private:
    int *arr;
    
    public:
    int front, rear;
    bool isFull = false;
    int size;
    
    // Constructor for Queue
    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;    
        rear = 0;
    }
    
    // function to get size of queue
    int getSize(){
        return this->size;
    }
    
    // Function to check if queue is empty or not
    bool isEmpty(){
        if((front%size == rear%size) && !isFull)
        return true;
        
        return false;
    }
    
    // Function to get element at the top
    int top(){
        if(!isEmpty())
            return arr[front];
    }
    
    // Function declaration of push and pop
    int push(int element);
    int pop();
    
};


 // } Driver Code Ends


//User function Template for C++

// Function to implement push operation in the queue
// element: element to be pushed into the queue
int Queue::push(int element){
    
    int size = getSize();
    
    if(isFull){
        return -1;
    }
    else{
        arr[rear] = element;
        if((rear+1)%size == front%size) isFull = true;
        rear++;
    }
    
    return 1;
}


int Queue::pop(){
    
    int size = getSize();
    
    if(isEmpty()){
        return -1;
    }
    else {

        front++;
        isFull = false;
    }
    return 1;
}


// { Driver Code Starts.

// Driver code
int main() {
	
	int t;
	cin >> t;
	
	while(t--){
    	int query, size;
    	cin >> size >> query;
    	
    	// Initializing object of Queue
    	Queue qu = Queue(size);
    	
    	while(query--){
    	    
            int q;
    	    cin >> q;
    	    
    	    if(q == 1){
    	        int x;
    	        cin >> x;
    	        if(qu.push(x) != -1) cout << "1\n"; else cout << "-1\n";
    	    }
    	    else{
    	        if(qu.pop() !=- 1)
    	            cout << "1\n";
    	        else cout << "-1\n";
    	    }
    	    
    	}
	}
	
	return 0;
}  // } Driver Code Ends