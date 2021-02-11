#include<iostream>
using namespace std;

int fibo(int n){
	if(n==0)
	    return 0;
	if(n==1)
	    return 1;
	
	int sm1 = fibo(n-1);
	int sm2 = fibo(n-2);
	return sm1+sm2;
}

int main(){
	int n;
	cin>>n;	
	cout<<fibo(n);
}
