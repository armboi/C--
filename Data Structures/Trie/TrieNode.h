//class TrieNode {
//	public :
//	char data;
//	TreeNode **children;
//	bool isTerminal;
//
//	TrieNode(char data) {
//		this -> data = data;
//		children = new TrieNode*[26];
//		for(int i = 0; i < 26; i++) {
//			children[i] = NULL;
//		}
//		isTerminal = false;
//	}
//
//
//};

class trieNode{
	public:
		char data;
		trieNode **children;
		bool isTerminal;
		
		trieNode(char data){
			this->data = data;
			children = new trieNode*[26];
			for(int i=0;i<26;i++){
				children[i] = '\0';
			}
			isTerminal = false;
		}
};
