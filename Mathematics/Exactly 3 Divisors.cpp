// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
bool isprime(int N){
    for(int i=2;i<=sqrt(N);i++){
        if(N%i==0) return false;
    }
    return true;
}

int exactly3Divisors(int N)
{
    int count=0;
    for(int i=2;i<=sqrt(N);i++){
        if(isprime(i)) count++;
    }
    return count;
    //Your code here
}

// { Driver Code Starts.


int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends