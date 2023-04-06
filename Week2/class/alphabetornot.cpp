#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter char : ";
    cin>>ch;
    int asci = (int)ch;
    if((asci>=97 && asci<=122) || (asci>=65 && asci<=97)){
        cout<<"char is alphabet";
    }
    else{
        cout<<"not a alphabet";
    }

}