//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        
        stack<char> st;
        int ln=x.length();
        if(ln==1){
            return 0;
        }
        for(int i=0;i<ln;i++){
            if(x[i]=='('||x[i]=='['||x[i]=='{'){
                st.push(x[i]);
            }
            else{
                if(st.size()==0){
                    return 0;
                }
                else if(st.top()=='('){
                    if(x[i]==')'){
                        st.pop();
                    }
                    else{
                        return 0;
                    }
                }
                else if(st.top()=='{'){
                    if(x[i]=='}'){
                        st.pop();
                    }
                    else{
                        return 0;
                    }
                }
                else if(st.top()=='['){
                    if(x[i]==']'){
                        st.pop();
                    }
                    else{
                        return 0;
                    }
                }
            }
        }
        return st.empty();
        // return 1;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends