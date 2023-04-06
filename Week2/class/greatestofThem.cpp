#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter first number : ";
    cin>>b;
    cout<<"enter first number : ";
    cin>>c;

    if(a>b && a>c){
        cout<<"a is greatest";
    }
    if(b>a && b>c){
        cout<<"b is greatest";
    }
    if(c>b && c>a){
        cout<<"c is greatest";
    }
    
}