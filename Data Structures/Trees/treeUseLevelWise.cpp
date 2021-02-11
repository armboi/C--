#include<iostream>
#include<queue>
#include"treenode.h"
using namespace std;


int sumOfNodes(TreeNode<int>* root) {    
    int sum = root->data;
    for(int i=0;i<root->children.size();i++){
        sum +=sumOfNodes(root->children[i]); 
    }
    return sum;
}


int numNodes(TreeNode<int>* root){
	int ans=1;
	for(int i=0;i<root->children.size();i++){
		ans+=numNodes(root->children[i]);
	}
	return ans;
}

void printAtLevelK(TreeNode<int>* root , int k){
	if(root==NULL){
		return;
	}
	
	if(k==0){
		cout<<root->data<<endl;
		return;
	}
	
	for(int i=0;i<root->children.size();i++){
		printAtLevelK(root->childen[i] , k-1);
	}
}

int height(TreeNode<int> *root){
	if(root==NULL){
		return 0;
	}
	
	int ans = 0;
	for(int i=0;i<root->children.size();i++){
		int smallAns = height(root->chidren[i]);
		if(smallAns > ans){
			ans = smallAns;
		}
	}
	return ans+1;
}

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    if(root==NULL){
        return root;
    }
    
    TreeNode<int> *max=root;
    
    for(int i=0;i<root->children.size();i++){
        TreeNode<int> *temp = maxDataNode(root->children[i]);
        if(temp->data > max->data){
            max = temp;
        }
    }
    return max;
}

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

TreeNode<int> *takeInputLevelWise(){
	int rootData;
	cout<<"Enter root data ";
	cin>>rootData;
	
	TreeNode<int> *root = new TreeNode<int>(rootData);
	queue<TreeNode<int>*> pendingNodes;
	
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		TreeNode<int> *front = pendingNodes.front();
		pendingNodes.pop();
		cout<<"Enter num of children of "<<front->data<<endl;
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
	TreeNode<int> *root = takeInputLevelWise();
    printLevelWise(root);
    cout<<"Total no. of Nodes : "<<numNodes(root)<<endl;
    cout<<"Sum of all Nodes : "<<sumOfNodes(root)<<endl;
    
}
