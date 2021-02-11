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

void printIthNode(Node *head, int i) {
    int j=0;
    Node *temp = head;
    while(temp!=NULL){
        if(j==i){
            cout<<temp->data;
            return;
        }
        j++;
        temp=temp->next;
    }
}

int main() {
    Node *head = takeinput();
    int pos;
    cin >> pos;
    printIthNode(head, pos);
    return 0;
}


