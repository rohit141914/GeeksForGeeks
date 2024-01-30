//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    unordered_set<char> a;
    int l=s.length();
    string ans="2";
    for(int i=0;i<l;i++){
        if(a.find(s[i])==a.end()){
            a.insert(s[i]);
        }
        else{
            ans[0]=s[i];
            return ans;
        }
    }
        return "-1";
}