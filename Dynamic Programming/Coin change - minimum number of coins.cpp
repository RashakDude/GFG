// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//Complete this function
long long minimumNumberOfCoins(int coins[],int numberOfCoins,int value)
{
    int dp[value+1];
    dp[0]=0;
    for(int i=1;i<=value;i++){
        dp[i]=INT_MAX;
        for(int j=0;j<numberOfCoins;j++) if(i-coins[j] >= 0) dp[i] = min(dp[i],dp[i-coins[j]]);
        if(dp[i]!=INT_MAX)dp[i]++;
    }
    if(dp[value]!=INT_MAX)return dp[value];
    else return -1;
    // your code here
}

// { Driver Code Starts.



int main() {
	
	//taking total count of testcases
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    //taking value
	    int value;
	    cin>>value;
	    
	    //taking number of coins
	    int numberOfCoins;
	    cin>>numberOfCoins;
	    int coins[numberOfCoins];
	    
	    //taking value of each coin
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    
	    //calling function minimumNumberOfCoins()
	    int answer=minimumNumberOfCoins(coins,numberOfCoins,value);
	    
	    //printing "Not Possible" if answer is -1
	    //else printing answer
	    if(answer==-1)
	    cout<<"Not Possible"<<endl;
	    else
	    cout<<answer<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends