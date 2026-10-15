#include<iostream>

using namespace std;

// funciton with parameter
void displayName(string name){
    cout<<"you name is "<<name<<endl;
}

// function with return type
int add(int a,int b){
    return a+b;
}
string fullname(string first, string last){
    return first + " " + last;
}

int chageValue(int x){
    x = 100;
    return x;
}
int chageValue1(int &x){
    x = 100;
    return x;
}
int main(){

string name = "yash ";
displayName(name);

int a1 = 32;
int b2 = 12;

cout<<add(a1,b2)<<endl;
int res = add(a1,b2);
cout<<res<<endl;

cout<<fullname("Amit","Dubey")<<endl;

int a = 60;
int updateda = chageValue(a);
cout<<updateda<<endl;
cout<<a<<endl;
int updateda1 = chageValue1(a);
cout<<updateda1<<endl;
cout<<a<<endl;
    return 0;
}