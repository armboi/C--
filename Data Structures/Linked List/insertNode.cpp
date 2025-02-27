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

Node *insertNode(Node *head , int i ,int data){
	Node *newNode = new Node(data);
	int count = 0;
	Node *temp = head;
	
	if(i==0){
		newNode -> next = head;
		head = newNode;
		return head;
	}
	
	while(temp->next!=NULL && count <i-1){
		temp =temp ->next;
		count++;
	}
	
	if(temp!=NULL){
		Node *a=temp->next;
		temp->next = newNode;
		newNode->next =a;
	}
	return head;
}

int main() {
    Node *head = takeinput();
    int pos ,data;
    cin >> pos;
    cin>>data;
    head = insertNode(head, pos ,data);
    print(head);
    return 0;
}


