// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// Function to count set bits in the given number x
// n: input to count the number of set bits

unsigned int getLeftmostBit(int n) {  
    int m = 0;  
    while (n > 1) {  
        n = n >> 1;  
        m++;  
    }  
    return m;  
}  

unsigned int getNextLeftmostBit(int n, int m)  
{  
    unsigned int temp = 1 << m;  
    while (n < temp) {  
        temp = temp >> 1;  
        m--;  
    }  
    return m;  
}

unsigned int _countSetBits(unsigned int n, int m);
 
unsigned int countSetBits(unsigned int n)  {  
    int m = getLeftmostBit(n);  
    return _countSetBits(n, m);  
}

unsigned int _countSetBits(unsigned int n, int m)  {  
    if (n == 0) return 0;  
    m = getNextLeftmostBit(n, m);  
    if (n == ((unsigned int)1 << (m + 1)) - 1) return (unsigned int)(m + 1) * (1 << m);  
    n = n - (1 << m);  
    return (n + 1) + countSetBits(n) + m * (1 << (m - 1));  
} 
  


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       
	       cout << countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends