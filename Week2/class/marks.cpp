#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter marks :";
    cin>>x;
    if(x>=91){
        cout<<"Excellent";
    }
    else if(x>=81){
        cout<<"very good";
    }
    else if(x>=71){
        cout<<"good";
    }
    else{
        cout<<"fail";
    }
    
    
}