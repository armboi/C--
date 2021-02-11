//Eliminate duplicates from a sorted linked list
#include <iostream>
#include<bits/stdc++.h>
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

node* eliminate_duplicate(node* head){
	node *temp=head ,*a;
	while(temp->next!=NULL){
		if(temp->data==temp->next->data){
			a = temp->next;
			temp->next = a->next;
			delete a;
			
		}else{
			temp=temp->next;	
		}
	}
	return head;
}

int main(){
    node* head=takeinput();
    head=eliminate_duplicate(head);
    print(head);
    return 0;
}


