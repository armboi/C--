#include<bits/stdc++.h>
using namespace std;

void swap(int a, int b){
  a = a^b;
  b = a^b;
  a = a^b;
}

void moveNegToStart(int arr[], int n){
  int j=0;
  for(int i=0; i<n;i++){
    if(arr[i]<0){
      if(i!=j){
        swap(arr[i], arr[j]);
      }
      j++;
    }
  }
}

int main(){
  int n;
  int arr[1000];
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    cin>>arr[n];
  }
  moveNegToStart(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
}