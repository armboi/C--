#include<iostream>
using namespace std;

template <typename t>
void func(t x){
	cout<<"Template Var. = "<<x<<endl;
}
void func(int a){
	cout<<"Integer Var. = "<<a<<endl;
}

int main(){
	func(20.75);
	func(20);
}
