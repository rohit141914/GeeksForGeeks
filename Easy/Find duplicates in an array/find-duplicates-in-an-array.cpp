//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        unordered_map<int,int> ans;
        vector<int> res;
        for(int i=0;i<n;i++){
            if(ans.find(arr[i])!=ans.end()){
                if(ans[arr[i]]==1){
                res.push_back(arr[i]);
                ans[arr[i]]++;
            }
            ans[arr[i]]++;
              }
            else{
                ans[arr[i]]++;
            }
        }
        sort(res.begin(),res.end());
        if(res.size()==0){
            res.push_back(-1);
            return res;
        }
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends