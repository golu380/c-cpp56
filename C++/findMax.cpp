#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[6] = {12,23,32,45,65,45};

    int maximum = INT_MIN; // 12 23 
    int min = INT_MAX;

    for(int i  = 0;i<6;i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
    }
    for(int i = 0;i<6;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<"maximum number is: "<<maximum<<endl;
      cout<<"minimum number is: "<<min<<endl;


    return 0;
}