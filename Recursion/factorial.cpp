 #include<iostream>
 #include<climits>
 using namespace std;
 
 int factorial(int n){
 	if(n==0){
 		return 1;
	 }
 	int smallOutput = factorial(n-1);
 	return n*smallOutput;
 }
 
 int main(){
 	int n;
 	cin>>n;
 	
 	int fact = factorial(n);
 	cout<<INT_MAX<<endl;
 	cout<<"Factorial of "<<n<<" is : "<<fact;
 }
