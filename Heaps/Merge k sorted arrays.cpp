// { Driver Code Starts
#include<bits/stdc++.h>


#define N 105
using namespace std;

int *mergeKArrays(int arr[][N],int k);

void printArray(int arr[], int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    int arr[N][N];
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	int *output = mergeKArrays(arr, k);
	printArray(output, k*k);
	cout<<endl;
}
	return 0;
}// } Driver Code Ends


// your task is tocomplete this function
// function should return an pointer to output array int*
// of size k*k
int *mergeKArrays(int arr[][N], int k)
{
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            q.push(arr[i][j]);
        }
    }
    int *ans = new int[k*k];
    int i=0;
    while(!q.empty()){
        ans[i] = q.top();
        q.pop();
        i++;
    }
    return ans;
//code here
}