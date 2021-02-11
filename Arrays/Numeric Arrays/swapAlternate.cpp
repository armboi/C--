#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i==size-1)
            continue;
        int swap = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = swap;
    }
}


int main(){
  int size;  
  cin >> size;
  int* arr = new int[size];
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  } 
  swapAlternate(arr, size);
 for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  delete arr;
}



