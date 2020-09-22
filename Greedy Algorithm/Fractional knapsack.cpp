// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends


//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

// function to return fractionalweights

bool compare(struct Item a, struct Item b){
    double r1 = (double) a.value/a.weight;
    double r2 = (double) b.value/b.weight;
    return r1>r2;
}

double fractionalKnapsack(int W, Item arr[], int n){
    sort(arr,arr+n,compare);
    double final = 0.0;
    for(int i=0;i<n;i++){
        if(arr[i].weight <= W){
            W -= arr[i].weight;
            final += arr[i].value;
        }
        else{
            final += arr[i].value * ((double) W/arr[i].weight);
            break;
        }
    }
    return final;
    // Your code here
}

// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		cout<<fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends