#include "TrieNode.h"
#include<string>


class trie {
	trieNode *root;

	public :

	trie() {
		root = new trieNode('\0');
	}

	void insertWord(trieNode *root, string word) {
		// Base case
		if(word.size() == 0) {
			root -> isTerminal = true;
			return;
		}

		// Small Calculation
		int index = word[0] - 'a';
		trieNode *child;
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			child = new trieNode(word[0]);
			root -> children[index] = child;
		}
		
		// Recursive call
		insertWord(child, word.substr(1));
	}

	// For user
	void insertWord(string word) {
		insertWord(root, word);
	}
};
//class trie{
//    trieNode *root;
//	
//	public:
//	
//	trie(){
//		root=new trieNode('\0');
//	}	
//	
//	void insertWord(trieNode *root , string word){
//		//Base Case
//		if(word.size()==0){
//			root->isTerminal = true;
//			return;
//		}
//		
//		//small calculation
//		int index = word[0]-'a';
//		trieNode *child;
//		if(root->children[index] != NULL){
//			child = root->children[index];
//		}else{
//			child = new trieNode(word[0]);
//			root->children[index] = child;
//		}
//		
//		//recursive call
//		insertWord(child , word.substr(1));
//	}
//	
//	//for user
//	void insertWord(string word){
//		insertWord(root , word);
//	}
//};
