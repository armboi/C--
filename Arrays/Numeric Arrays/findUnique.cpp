#include<iostream>
#include <algorithm>
using namespace std;

int FindUnique(int * arr, int size){
    sort(arr ,arr+size);
    for(int i=0;i<size;i+=2){
    	if(i==size-1)
    		return arr[i];
        if(arr[i]!=arr[i+1])
            return arr[i];
    }
}

int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	cout<<FindUnique(input,size)<<endl;
		
	return 0;
}


