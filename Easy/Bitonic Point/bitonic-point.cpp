//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int s=0;
	    int e=n-1;
	    while(s<=e){
	       // cout<<"-";
	        int m=(s+e)/2;
	      if((arr[m]>arr[m-1]&&m==n-1 )|| (arr[m]>arr[m+1] && m==0)||arr[m]>arr[m-1]&&arr[m]>arr[m+1]){
	          return arr[m];
	      }
	      else if(arr[m]>arr[m-1]){
	          s=m+1;
	      }
	      else{
	          e=m-1;
	      }
	    }
	    return 0;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends