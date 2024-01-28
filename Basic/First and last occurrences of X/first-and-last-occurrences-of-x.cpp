//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        
        int s=0;
        int e=n-1;
        vector<int >ans;
        int l=-1;
        int r=-1;
        while(s<=e){
            int m=(s+e)/2;
        // cout<<m<<"-";
             if(arr[m]>x){
                e=m-1;
            }
            else if(arr[m]<x){
                s=m+1;
            }
            else{
            if(arr[m]==x &&m==0 ||arr[m]==x&&arr[m-1]!=x){
                l=m;
                break;
            }
                else{
                    e=m-1;
                }
            }
            // }
            
        }
        s=0;
        e=n-1;
         while(s<=e){
             int m=(s+e)/2;
           if(arr[m]>x){
                e=m-1;
            }
            else if(arr[m]<x){
                s=m+1;
            }
            else{
            if(arr[m]==x &&m==n-1 ||arr[m]==x&&arr[m+1]!=x){
                r=m;
                break;
            }
                else{
                    s=m+1;
                }
            }
         }
        //  cout<<l;
        if(l==-1){
         ans.push_back(-1);
         return ans;
        }
        ans.push_back(l);
        ans.push_back(r);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends