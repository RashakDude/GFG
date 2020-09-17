// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Number of bits to represent int
#define INT_BITS 32
int maxSubarrayXOR(int [], int n);
int main()
{

    int t,n,a[100004],k;
    scanf("%d",&t);
    while(t--)
    {
        //cin>>n;
      scanf("%d",&n);

        for(int i=0;i<n;i++)
            {
            scanf("%d",&a[i]);
            }


   
printf("%d\n",maxSubarrayXOR(a,n));
       // cout<<bin(a,0,n-1,k)<<endl;


    }
}// } Driver Code Ends


// Function to return maximum XOR subset in set[]
int maxSubarrayXOR(int set[], int n){
    int index = 0; 
    for (int i = 31; i >= 0; i--) {
        int maxInd = index; 
        int maxEle = INT_MIN; 
        for (int j = index; j < n; j++) {
            if ((set[j] & (1 << i)) != 0 && set[j] > maxEle) maxEle = set[j], maxInd = j; 
        } 
        if (maxEle == INT_MIN) continue; 
        swap(set[index], set[maxInd]); 
        maxInd = index; 
        for (int j=0; j<n; j++) {
            if (j != maxInd && (set[j] & (1 << i)) != 0) set[j] = set[j] ^ set[maxInd]; 
        } 
        index++; 
    } 
    int res = 0; 
    for (int i = 0; i < n; i++) 
        res ^= set[i]; 
    return res; 
    //Your code here
}