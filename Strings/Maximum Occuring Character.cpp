// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(char*);

int main()
{
   
    char str[100];
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s",str);
    cout<< getMaxOccuringChar(str)<<endl;
    }
}// } Driver Code Ends


// Function to get maximum occuring 
// character in given string str
char getMaxOccuringChar(char* str){
    int freq[26] = { 0 }; 
    int max = -1; 
    char result; 
    int len = strlen(str); 
    for (int i = 0; i < len; i++) freq[str[i] - 'a']++; 
    for (int i = 0; i < 26; i++) 
        if (max < freq[i]) { 
            max = freq[i]; 
            result = (char)(i + 'a'); 
        } 
    return result;
    // Your code here
}
