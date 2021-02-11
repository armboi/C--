#include<iostream>
using namespace std;

template<typename T>
class Node{
	public:
		T data;
		Node<T> *next;
		
		Node(T data){
			this->data = data;
			next = NULL;
		}
};

template<typename T>
class stackUsingLL{
    Node<T> *head;
    int size;
    
    public:
    	stackUsingLL(){
    		head = NULL;
    		size = 0;
		}
		
		
		
		bool isEmpty(){
			return size==0;
		}
		
		void push(T element){
		    Node<T> *newNode = new Node<T>(element);
		    newNode->next = head;
		    head = newNode;
			size++;	
		}
		
		T pop(){
			if(isEmpty()){
				cout<<"Stack Empty "<<endl;
			}else{
			    T ans = head->data;
			    Node<T> *temp = head;
			    head = head->next;
			    delete temp;
				size--;
				return ans;
			}
			
		}
		
		T top(){
			if(isEmpty()){
				cout<<"Stack Empty "<<endl;
			}else{
				return head->data;
			}
		}
		
		int getSize(){
		    return size;	
		}
};

int main(){
	stackUsingLL<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	cout<<s.top()<<endl;
	
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	
	cout<<s.getSize()<<endl;
	
	cout<<s.isEmpty()<<endl;
}
