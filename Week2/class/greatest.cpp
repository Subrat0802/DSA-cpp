#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter number x:";
    cin>>x;
    cout<<"enter number y:";
    cin>>y;
    cout<<"enter number z:";
    cin>>z;
    if(x>y){
        if(x>z){
            cout<<"x is greatest";
        }
        else{
            cout<<"z is greatest";
        }
    }
    else{
        if(y>z){
            cout<<"y is greatest";
        }
        else{
            cout<<"z is greatest";
        }
    }
}