#include<iostream>
using namespace std;

int main(){

    cout<<"enter the size of array::"<<endl;
    int size;
    cin>>size;

    int arr[size];
    
    for(int i = 0;i<size;i++){
        cout<<"enter "<<(i+1)<<"th element: ";
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
        sum = sum + arr[i];
    }
    cout<<"\nthe value of sum is: "<<sum<<endl;

    return 0;
}