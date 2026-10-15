#include<iostream>
using namespace std;

int main(){

  int marks[] = {12,13,14,16,17,19,90};
  cout<<marks[0]<<endl;
  cout<<marks[1]<<endl;
  cout<<marks[6]<<endl;
//   cout<<marks[7]<<endl; // it will throw garbaze valuej
    //updating marks at index 5
cout<<"earlier value was:"<<marks[5]<<endl;
    marks[5] = 87;
    cout<<"now value is: "<<marks[5]<<endl;
    marks[5] = 34;
   cout<<"now value is second time: "<<marks[5]<<endl;


    return 0;
}