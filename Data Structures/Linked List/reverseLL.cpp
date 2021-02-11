// Print a given linked list in reverse order. Tail first. You can?t change any pointer in the linked list
#include <iostream>
using namespace std;

class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

node* takeinput(){
    int data;
    cin>>data;
    node* head=NULL,*tail=NULL;
    while(data!=-1){
        node *newnode=new node(data);
        if(head==NULL)                  {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}

void print(node *head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node *print_linkedlist_spl(node *head){
	node *current = head;
	node *next=NULL;
	node *prev=NULL;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main()
{
    node*head=takeinput();
    print_linkedlist_spl(head);
    return 0;
}




