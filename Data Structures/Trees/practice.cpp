#include<iostream>
#include<vector>
#include<queue>
#include "treenode.h"
using namespace std;
//
//template<typename T>
//class TreeNode{
//	public:
//		T data;
//		vector<TreeNode<T>*> children;
//		
//		Treenode(T data){
//		    this->data = data;
//		}
//};

//take queue and insert 1st value and do a while loop till the queue is empty ,now take 1 out and print all the children on 1 one by applying for loop insert all childrens in queue


void printLevelWise(TreeNode<int>* root){
	if(root==NULL){
		return;
	}
	
	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		TreeNode<int>* front = pendingNodes.front();
		cout<<front->data<<":";
		pendingNodes.pop();
				
		int x=front->children.size();
		for(int i=0;i<front->children.size();i++){
		    cout<<front->children[i]->data;
			if(i==x-1){
               
            }else{
                cout<<",";
            }
			pendingNodes.push(front->children[i]);			
		}
		cout<<endl;
	}
}

/*
void printTree(TreeNode<int> *root){
	if(root==NULL){
		return;
	}
	
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++){
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++){
		printTree(root->children[i]);
	}
}
/*

TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter data "<<endl;
    cin>>rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    
    int n;
    cout<<"Enter the no of children of "<<rootData<<endl;
    cin>>n;
	for(int i=0;i<n;i++){
		TreeNode<int>* child = takeInput();
		root->children.push_back(child);
	}    
	return root;
}

*/

TreeNode<int>* takeInputLevelWise(){
	int rootData;
	cout<<"Enter Data "<<endl;
	cin>>rootData;
	
	TreeNode<int>* root = new TreeNode<int>(rootData);
	
	queue<TreeNode<int>*> pendingNodes;
	
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		
		cout<<"Enter the no of children "<<front->data<<endl;
		int numChild;
		cin>>numChild;
		for(int i=0;i<numChild;i++){
			int childData;
			cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
			cin>>childData;
			TreeNode<int> *child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}

int main(){
//	TreeNode<int>* root = new TreeNode<int>(1);
//	TreeNode<int>* node1 = new TreeNode<int>(2);
//	TreeNode<int>* node2 = new TreeNode<int>(3);
//	
//	root->children.push_back(node1);
//	root->children.push_back(node2);
    TreeNode<int>* root = takeInputLevelWise();
	printLevelWise(root);
}
