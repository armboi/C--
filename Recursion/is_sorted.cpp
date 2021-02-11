#include<iostream>
using namespace std;

bool is_sorted1(int arr[] , int size){
	if(size==0||size==1){
		return true;
	}
	if(arr[0]>arr[1])
	    return false;
	    
	return is_sorted1(arr+1 , size-1);
}

bool is_sorted2(int arr1[] , int size){
	if(size==0||size==1){
		return true;
	}
	
	bool ans = is_sorted2(arr1+1 ,size -1);
	if(ans==0){
		return false;
	}
	
	if(arr1[0]>arr1[1])
	return false;
	else
	return true;
}

int main(){
	int arr[5] = {1,2,3,4,5};
	cout<<is_sorted1(arr , 5);
	int arr1[5] = {1,2,7,4,5};
	cout<<is_sorted2(arr1 , 5);
}
