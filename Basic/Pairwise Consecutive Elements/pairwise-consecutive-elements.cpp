//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool pairWiseConsecutive(stack<int> s);

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<int> s;
        int n, tmp;
        cin>>n;
        while(n--){
            cin>>tmp;
	        s.push(tmp);
	    }
	    if (pairWiseConsecutive(s))cout << "Yes" << endl;
	    else cout << "No" << endl;
	    /*while (s.empty() == false)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout<<endl;*/
    }
	return 0;
}

// } Driver Code Ends


//User function Template for C++

// your task is to complete the function
// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    if(s.empty()||s.size()==1){
        return 1;
    }
    // int tp=s.top();
        int t=-1;
    while(s.size()!=0){
        if(t==-1){
            t=s.top();
            s.pop();
        }
        else{
            if(s.top()==t+1||s.top()==t-1){
                s.pop();
                t=-1;
            }
            else{
            return 0;
            }
        }
    }
        return 1;
}