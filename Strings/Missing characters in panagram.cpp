// { Driver Code Starts
//Initial Template for C++



#include<bits/stdc++.h>
using namespace std;

// A panagram is a string with every letter in the english alphabet present in the string

string missingPanagram(string str);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << missingPanagram(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++


string missingPanagram(string str){
    bool present[26] = {false}; 
    for (int i=0; i<str.length(); i++) { 
        if (str[i] >= 'a' && str[i] <= 'z') present[str[i]-'a'] = true; 
        else if (str[i] >= 'A' && str[i] <= 'Z') present[str[i]-'A'] = true; 
    } 
    string res = ""; 
    for (int i=0; i<26; i++) if (present[i] == false) res.push_back((char)(i+'a')); 
    return res; 
}
