// { Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<iostream>
#include<cstring>
using namespace std;
 
// Function return the total palindromic subsequence
int countPS(string str);
 
// Driver program
int main()
{
   int t;
	cin>>t;
   while(t--)
	{
	string str;
cin>>str;
cout<<countPS(str)<<endl;
} 
}// } Driver Code Ends


/*You are required to complete below method */
int t[31][31];

int count(string s,int start,int end){
    if(start>end) return 0;
    if(start==end) return 1;
    if(t[start][end]!=-1) return t[start][end];
    if(s[start]==s[end]) return t[start][end] = 1 + count(s,start+1,end) + count(s,start,end-1);
    else return t[start][end] = count(s,start+1,end) + count(s,start,end-1) - count(s,start+1,end-1);
}

int countPS(string str){
    memset(t,-1,sizeof(t));
    return count(str,0,str.length()-1);
   //Your code here
}
 