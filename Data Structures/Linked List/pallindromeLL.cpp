//Check if a linked list is a palindrome
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

bool check_palindrome(node* head){
    //write your code here
    node *temp=head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    
    if(count%2!=0){
        count=(count/2)+1;
    }else{
        count=count/2;
    }
    temp=head;
    int i=0;
    while(i<=count){
        temp=temp->next;
        i++;
    }
    
    node *current =temp;
    node *prev =NULL ;
    node *next =NULL;
    
    while(current!=NULL){
        next = current ->next;
        current ->next =prev;
        prev = current;
        current =next;
    }
    temp= prev;
    
    while(head!=NULL && temp!=NULL){
        if(head->data != temp->data){
            return false;
        }
        temp=temp->next;
        head=head->next;
    }
    
    return true;   
}

int main()
{
    node*head=takeinput();
    bool ans=check_palindrome(head);
    if(ans)
        cout<<"true";
    else 
        cout << "false";
    return 0;
}

