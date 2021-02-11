#include<bits/stdc++.h>
#include<stack>

bool checkBalanced(char *expr) {
	// Write your code here
    stack<char> s;
    char x;
    // for(int i=0;i<1;i++){
    // if (expr[i]==')'||expr[i]==']'||expr[i]=='}'){
    //     return false;
    // }}
    
    for(int i=0;expr[i]!='\0';i++){
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') { 
            s.push(expr[i]);
        } 
        
        if(s.empty()){
            return false;
        }
        
        switch(expr[i]) { 
        case ')': 
  
            x = s.top(); 
            s.pop(); 
            if (x=='{' || x=='['){
                return false;                 
            } 
            break; 
  
        case '}': 
  
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='['){ 
                return false; 
            }
            break; 
  
        case ']': 
  
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{'){ 
                return false; 
            }
            break; 
        } 
    }
    return (s.empty()); 
}


int main() {
    char input[100000];
    cin.getline(input, 100000);
//    cin >> input;
    if(checkBalanced(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

