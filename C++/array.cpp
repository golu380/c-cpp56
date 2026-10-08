#include<iostream>
using namespace std;

int main(){

    int arr[5] = {12,13,14,15,11};

    cout<<arr[0]<<endl;
     cout<<arr[1]<<endl;
      cout<<arr[2]<<endl;
       cout<<arr[3]<<endl;
        cout<<arr[4]<<endl;

        for(int i = 0;i<5;i++){
            cout<<arr[i]<<" ";
        }

        arr[3] = 78;
        cout<<"\nafter upation"<<endl;

     for(int i = 0;i<5;i++){
            cout<<arr[i]<<" ";
        }


    return 0;
}