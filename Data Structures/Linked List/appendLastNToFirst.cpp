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

node *append_LinkedList(node *head , int n){
	node *temp=head,*t=head;
	int i=-n;
	while(temp->next!=NULL){
		if(i>=0){
			t=t->next;
		}
		temp=temp->next;
		i++;
	}
	temp->next=head;
	head=t->next;
	t->next=NULL;
	return head;
}
/*
node *append_LinkedList(node* head,int n){
	if(n==0){
		return head;
	}
	node *temp=head;
	int c=1;
	while(temp->next!=NULL){
		temp=temp->next;
		c++;
	}
	
	c=c-n;
	int i=0;
	temp=head;
	while(i<c-1){
		temp=temp->next;
		i++;
	}
	
	node *temp2 = temp;
	temp=temp->next;
	node *temp3=temp;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next = head;
	head = temp3;
	temp2->next=NULL;
	
	return head;
}
*/
int main()
{
    node* head=takeinput();
    int n;
    cin>>n;
    head=append_LinkedList(head,n);
    print(head);
    return 0;
}

