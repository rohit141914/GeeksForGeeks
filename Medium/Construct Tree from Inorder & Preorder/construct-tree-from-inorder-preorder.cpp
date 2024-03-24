//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    
     int search(vector<int> v,int a,int b,int c){
        for(int i=a;i<=b;i++){
            if(v[i]==c){
                return i;
            }
        }
        return -1;
    }
         int idx=0;
    Node* tree(vector<int> pr, vector<int>in,int s,int e){
        if(s>e){
            return NULL;
        }
        int curr=pr[idx];
        idx++;

        Node* temp=new Node(curr);
        if(s==e){
            return temp;
        }
        int po=search(in,s,e,curr);
        temp->left=tree(pr,in,s,po-1);
        temp->right=tree(pr,in,po+1,e);
        return temp;
    }

    Node* buildTree(int in[],int pre[], int n)
    {
        vector<int> pre2;
        pre2.insert(pre2.begin(),pre,pre+n);
        
        vector<int> in2;
        in2.insert(in2.begin(),in,in+n);
        return tree(pre2,in2,0,n-1);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends