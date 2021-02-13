#include<bits/stdc++.h>
using namespace std;

int randomPartition(arr[], l , r){
  
}

int kthSmallest(arr[], 0, n-1, k){
  if(k>0 && k<=r-l+1){
    int pos = randomPartition(arr, l, r);

  }
  return INT_MAX;
}

int main(){
  int arr[1000];
  int n,k;
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Kth samllest element in the array id : " <<kthSmallest(arr, 0, n-1, k);
}