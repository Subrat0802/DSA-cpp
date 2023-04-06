#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter sp :";
    cin>>sp;
    cout<<"Enter cp :";
    cin>>cp;
    if(sp>cp){
        cout<<"Profit";
    }
    else if(cp>sp){
        cout<<"Loss";
    }
    else{
        cout<<"no profit no loss";
    }
}