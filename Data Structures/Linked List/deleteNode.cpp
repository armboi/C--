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

Node* deleteNode(Node *head , int i){
	Node *temp = head;
	int c=0;
	
	if(i==0){
		head = head ->next;
		return head;
	}
	
	while(temp ->next !=NULL && c<i-1){
		temp=temp->next;
		c++;
	}
	
	if(temp!=NULL){
		Node *a=temp->next;
		if(temp->next!=NULL){
			Node *b = a->next;
			temp->next=b;
		}
		delete a;
	}
	return head;
}

int main() {
    Node *head = takeinput();
    int pos;
    cin >> pos;
    head = deleteNode(head, pos);
    print(head);
    return 0;
}


