#include<iostream>
using namespace std;
int main()
{

    int size;
    cout<<"enter the size of array: ";
    cin>> size;

    int arr[size];

    for(int i = 0;i<size;i++){
        cout<<"enter" <<i+1<<"th element: ";
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
        // sum = sum + arr[i];
        sum += arr[i];
    }
    cout<<"\nthe sum of entered values is: "<<sum<<endl;
     cout<<"\nthe average of entered values is: "<<(double)sum/size<<endl;

    


    return 0;
}