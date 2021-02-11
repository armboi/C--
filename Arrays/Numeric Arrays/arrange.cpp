#include<iostream>
using namespace std;

void arrange(int arr[],int n){
    int x = 1;
    for(int i=0 , j=n-1 ;i<=j;i++,j--,x++){
        arr[i] = x;
        if(i==j)
            continue;
        arr[j] = ++x;
    }
}

int main(){
  int n;  
  cin >> n;
  
  int* arr = new int[n];
  arrange(arr,n);
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  delete arr;
}


