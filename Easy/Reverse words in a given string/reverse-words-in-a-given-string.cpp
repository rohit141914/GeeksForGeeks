//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
         string t="";
        string ans="";
        bool f=false;
        for(int i=0;i<S.length();i++){
            if(S[i]!='.'){
                f=true;
                t=t+S[i];
            }
            else if(S[i]=='.'&&f==true){
                // if(i!=s.length()-1){
                // }
                reverse(t.begin(),t.end());
                t=t+'.';
                ans=ans+t;
                t.clear();
                f=false;
            }
        }
        // t=t+' ';
        reverse(t.begin(),t.end());
                ans=ans+t;
                reverse(ans.begin(),ans.end());
                int ln=ans.size();
                if(ans[0]==' '){
                    return ans.substr(1,ln-1);
                }
                return ans.substr(0,ln);
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends