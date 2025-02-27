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

Node* deleteNode(Node *head, int i) {
    int count=0;
    Node *temp=head;
    //Checking if first node is to be deleted
    if(i==0){
        head=temp->next;
        delete temp;
        return head;
    }
    while(count<i-1&&temp!=NULL){
        temp=temp->next;
        count++;
    }
    //Checking for i greater than the size linked list
    if(temp->next!=NULL){
        Node *a=temp->next;
        temp->next=temp->next->next;
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


