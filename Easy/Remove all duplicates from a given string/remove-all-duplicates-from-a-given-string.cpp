//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    string a="";
	    unordered_set<char> st;
	    int ln=str.length();
	    for(int i=0;i<ln;i++){
	        if(st.find(str[i])==st.end()){
	            st.insert(str[i]);
	            a=a+str[i];
	        }
	    }
	    return a;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends