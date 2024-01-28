//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> ans;
    // int ln1=sizeof(a1)/sizeof(a1[0]);
    // int ln2=sizeof(a2)/sizeof(a2[0]);
        // cout<<a1.size()<<'-';
    for(int i=0;i<n;i++){
        ans[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        if(ans.find(a2[i])!=ans.end()){
            // return "No";
            ans[a2[i]]--;
            if(ans[a2[i]]<0){
                return "No";
            }
        }
        else{
        return "No";
        }
    }
    return "Yes";
}