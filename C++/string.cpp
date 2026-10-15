#include<iostream>
using namespace std;

int main(){

    string name = "yash";
    cout<<name<<endl;

    string name1  = "yash";
    cout<<"enter your name: ";
    // cin>>name1;
    cout<<"my name is: "<<name1<<endl;
    cout<<"size of name1:"<<name1.length()<<endl;

    string word = "i am learning cpp";
    cout<<word<<endl;
    cout<<word[0]<<endl;
    int ind =-1;

    for (int i = 0;i<word.length();i++){
        if(word[i] == 'l'){
            ind = i;
            break;
        }
    }
    cout<<ind<<endl;
    word[ind] = 'R';
    cout<<word<<endl;
    string fname = "Akhil";
    string lname = "saini";
    string fullname = fname + " " + lname;

    cout<<fname + " " + lname<<endl;
    cout<<"full name is: "<<fullname<<endl;

   string  a = "hello";
   string b  = "hello";
   cout<<"enter two strings: ";
//    cin>>a>>b;

   if(a == b){
    cout<<"string is equal"<<endl;
   }else{
    cout<<"equal nhi hai.."<<endl;
   }

   string sen = "I am learning cpp";
   if(sen.find("cpp1") !=  string::npos){
    cout<<"found"<<endl;
   }else{
    cout<<"not found"<<endl;
   }

   string name3 = "deeraj is learning";
   cout<<name3.substr(0,6)<<endl;
   string p = "Hello ";
   string q = "world";
   string res =  p.append(q);
   cout<<res<<endl;
   cout<<res.append("cpp");
   

    return 0;
}