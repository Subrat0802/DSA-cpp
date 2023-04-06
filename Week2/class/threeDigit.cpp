#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter number:";
    cin>>x;
    if(x>=100 && x<=999){
        cout<<"three digit number";
    }
    else{
        cout<<"no";
    }
}