#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swap_call_value(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

int a = 50,b = 40;
cout<<"before swap fun"<<a<<" "<<b<<endl;
swap(a,b);
cout<<"after swaping fun"<<a<<" "<<b<<endl;
    return 0;
}