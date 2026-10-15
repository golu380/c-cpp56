#include<iostream>
using namespace std;
void myfunc();

bool iseven(int n){
    return n%2 == 0;
}

int sumeven(int n){
    int sum = 0;
    for (int i = 1;i<=n;i++){
        if(iseven(i)){
            sum = sum + i;

        }
        
    }
    return sum;
}


int main(){

    myfunc();
    myfunc();
    cout<<"enter number till where you want to sum : ";
    int num;
    cin>>num;

    int res = sumeven(num);
    cout<<res<<endl;


    return 0;
}
void myfunc(){
    cout<<"hello from function block"<<endl;
    cout<< "i am learning function "<<endl;
}