#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int b = 3;

    cout<<"result is: "<<a/b<<endl;
    cout<<"result in double is "<< (double)a/b<<endl;

    double res = static_cast<double>(a) / b;
    cout<<"res is "<<res<<endl;

    return 0;
}