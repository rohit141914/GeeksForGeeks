//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends


string transform(string S){
    string ans = "";
    int c = 0;
    S += '-';
    for(int i = 0; i < (int)S.size()-1; i++){
        c++;
        if(S[i] != '-' && tolower(S[i]) == tolower(S[i+1])) continue;
        ans += to_string(c);
        ans += tolower(S[i]);
        c = 0;
    }
    return ans;
}

