//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        string ans="";
        // string temp="";
        stack<char> t;
        for(int i=0;i<s.length();i++){
            if(s[i]!='.'){
                t.push(s[i]);
            }
            else{
                ans+='.';
                while(!t.empty()){
                  ans+=t.top();
                  t.pop();
                }
            }
        }
               ans+='.';
                while(!t.empty()){
                  ans+=t.top();
                  t.pop();
                }
        return ans.substr(1,s.length());
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends