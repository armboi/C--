#include<iostream>
#include<queue>
#include "binaryTreeNode.h"
using namespace std;

void printTree(binaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	
	queue<binaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		binaryTreeNode<int>* front = pendingNodes.front();
		cout<<front->data<<":";
		pendingNodes.pop();
		if(front->left->data!=-1){
			cout<<"L:"<<front->left->data<<",";
			        pendingNodes.push(front->left);

		}else if(front->left->data==-1){
			cout<<"L:"<<front->left->data<<",";
						        pendingNodes.push(front->left);

		}
		if(front->right->data!=-1){
			cout<<"R:"<<front->right->data;
					pendingNodes.push(front->right);

		}else if(front->right->data==-1){
			cout<<"R:"<<front->right->data;
								pendingNodes.push(front->right);

		}		
	    cout<<endl;
	}
}


binaryTreeNode<int>* takeInputLevelWise(){
	int rootData;
	cout<<"Enter root data "<<endl;
	cin>>rootData;
	if(rootData==-1){
		return NULL;
	}
	binaryTreeNode<int> *root = new binaryTreeNode<int>(rootData);
	
	queue<binaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		binaryTreeNode<int> *front = pendingNodes.front();
		pendingNodes.pop();
		
		cout<<"Enter left child of "<<front->data<<endl;
		int leftChildData;
		cin>>leftChildData;
		if(leftChildData!=-1){
			binaryTreeNode<int> *child = new binaryTreeNode<int>(leftChildData);
			front->left = child;
			pendingNodes.push(child);
		}		
		cout<<"Enter right child of "<<front->data<<endl;
		int rightChildData;
		cin>>rightChildData;
		if(rightChildData!=-1){
			binaryTreeNode<int> *child =new binaryTreeNode<int>(rightChildData);
			front->right = child;
			pendingNodes.push(child);
		}
	}
	return root;
}

int main(){
	binaryTreeNode<int> *root = takeInputLevelWise();
	printTree(root);
	delete root;
}
