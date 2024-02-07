//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

// task is to complete this function
struct Node* arrange(Node *head);

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        head = arrange(head);
        printlist(head);
    }
	return 0;
}


// } Driver Code Ends


/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// task is to complete this function
// function should return head to the list after making 
// necessary arrangements
struct Node* arrange(Node *head)
{
   //Code here
   Node *vs=NULL;
   Node *ve=NULL;
   Node *cs=NULL;
   Node *ce=NULL;
   while(head != NULL){
       if(head->data=='a'||head->data=='e'||head->data=='i'||head->data=='o'||head->data=='u'){
           if(vs==NULL){
               vs=head;
               ve=head;
           }
           else{
               ve->next=head;
               ve=ve->next;
           }
       }
       else{
           if(cs==NULL){
               cs=head;
               ce=head;
           }
           else{
               ce->next=head;
               ce=ce->next;
           }
       }
    //   cout<<'-'<<endl;
      head=head->next;
   }
   if(vs==NULL) return cs;
   if(cs==NULL) return vs;
   ve->next=cs;
   ce->next=NULL;
   return vs;
}
