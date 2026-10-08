#include<iostream>
using namespace std;

int main(){

    int age = 12;
    bool ispass = true;
 
    cout<<(age>18 && ispass)<<endl;  
    cout<<(age>18 || ispass)<<endl; 

    bool isLogin = true;

    cout<< !isLogin<<endl;

    int num = 34;
    cout<<num<<endl;
    num += 10;  // num = num + 10
    cout<<num<<endl;
    num -= 10;
    cout<<num<<endl;
    num *= 2;
    cout<<num<<endl;


    num /= 17; 
    cout<<num<<endl;

    int a = 27;
    int b = 4; 
    cout<<"remainder is: " <<a%b<<endl;

    // preincreament  and decreament 
    int x = 10;

    cout<<++x<<endl; // preincreament operator 11
    cout<<x++<<endl; // postincreament  operator 11
    cout<<x<<endl; // 12

    int y = 25;
    cout<<--y<<endl; //24
    cout<<y--<<endl; //24
    cout<<y<<endl; //23

    // int z = 15;
    // // int k = z++ + ++z;
    // cout<<++z + z++<<endl;
    // // int k1  = ++z + z++;
    // cout<<k1<<endl;
    // // cout<<k<<endl;

    int p = 2;  //  ~p = -(p+1)
    int q = 3;  

    cout<<(p & q) <<endl;
    cout<<(p | q)<<endl;
    cout<<~p<<endl;
    cout<<~q<<endl;
    cout<<(2<<2)<<endl;
    cout<<(2<<3)<<endl;

    cout<<(16>>2)<<endl;
    cout<<(32>>3)<<endl;
    int age1 = 3;

    string  result  = (age1 >= 18) ? "Adult" : "minor";
    cout<<result<<endl;

    return 0;
}