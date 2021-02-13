#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[100];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0,j=n-1;i<j;i++,j--){
    arr[i] = arr[i] ^ arr[j];
    arr[j] = arr[i] ^ arr[j];
    arr[i] = arr[i] ^ arr[j];
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}