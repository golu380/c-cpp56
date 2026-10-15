#include<iostream>

using namespace std;
void insertionSort(int arr[],int size){

    for(int i = 1;i<size;i++){
        int key = arr[i];
        int pos = i-1;

        while(pos>= 0 && arr[pos]> key){
            arr[pos + 1]  = arr[pos];
            pos--;
        }
        arr[pos + 1]  = key;
    }
}

int main(){

    int arr[] = {12,32,45,44,67,89,76};
    int size = sizeof(arr) /sizeof(arr[0]);

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    insertionSort(arr,size);
    cout<<endl;
  for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}