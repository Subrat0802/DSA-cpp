#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter number :";
    cin>>a;
    cout<<"Enter number :";
    cin>>b;
    cout<<"Enter number :";
    cin>>c;

    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<"triangle";
    }
    else{
        cout<<"not";
    }

}