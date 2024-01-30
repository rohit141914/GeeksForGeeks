//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    unordered_set<char> ans;
	    int ln=0;
	    for(int i=0;i<S.length();i++){
	        if(ans.find(S[i])==ans.end()){
	            ans.insert(S[i]);
	            S[ln]=S[i];
	            ln++;
	        }
	    }
	    return S.substr(0,ln);
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends