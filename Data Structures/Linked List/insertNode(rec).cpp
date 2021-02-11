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

Node *insert(Node *temp , int i , int data){
	if(temp==NULL){
		if(i==0){
			Node *newNode = new Node(data);
			return newNode;
		}else{
			return temp;
		}
	}
	
	if(i==0){
		Node *newNode = new Node(data);
		newNode->next = temp;
		return newNode;
	}
	temp->next = insert(temp->next , i-1 ,data);
	return temp;
}

Node* insertNodeRec(Node *head, int i, int data) {
	Node *temp=head;
	return insert(temp,i,data);
}

int main() {
    Node *head = takeinput();
    int pos, data;
    cin >> pos >> data;
    head = insertNodeRec(head, pos, data);
    print(head);
    return 0;
}

