//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string f=arr[0];
        int ln=f.size();
        int c=0;
        for(int i=1;i<N;i++){
                c=0;
            
            for(int j=0;j<ln;j++){
                if(arr[i][j]==f[j]){
                    c++;
                }
                else{
                    ln=min(ln,c);
                    break;
                }
            }
        }
        if(ln==0){
            return "-1";
        }
        return f.substr(0,ln);
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends