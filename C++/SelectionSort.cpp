#include<bits/stdc++.h>

using namespace std;

void selectionsort(int arr[],int n){

    for (int i = 0;i<n-1;i++){
        int minind = i;
        for(int j = i + 1;j<n;j++){

            if(arr[j] < arr[minind]){
                minind = j;
            }

        }

        swap(arr[i],arr[minind]);
    }
}

int main(){

    int arr[] = {12,32,45,34,11,22,78,65};
    for(int i =0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
        selectionsort(arr,8);

          for(int i =0;i<8;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}