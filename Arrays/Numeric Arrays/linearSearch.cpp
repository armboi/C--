#include <iostream>
using namespace std;

int linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}

int main() {
	
	int size,x;
	cin>>size;
	int *input=new int[1+size];
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	cin>>x;

	cout<<linearSearch(input,size,x);
	return 0;
}


