#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

Node* insertAtIthNode(Node *head , int i,int data){
	Node *newNode = new Node(data);
	int count=0;
	Node *temp=head;
	
	if(i==0){
		newNode->next=head;
		head=newNode;
		return head;
	}
	while(count<i-1 && temp!=NULL){
		temp=temp->next;
		count++;
	}
	//connection of the newNode is to be made first with the next node coz 
	//if we connect the newNode with the previous node then we will not have the
	//address of the next node.
	if(temp!=NULL){
		newNode->next = temp->next;
		temp->next = newNode;
	}
	return head;
}

int main() {
    Node *head = takeinput();
    int pos,data;
    cin >> pos;
    cin >>data;
    head=insertAtIthNode(head, pos ,data);
    print(head);
    return 0;
}


