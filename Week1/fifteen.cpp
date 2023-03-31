#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"enter pricipal :";
    cin>>p;
    cout<<"enter rate of interest :";
    cin>>r;
    cout<<"enter time :";
    cin>>t;
    float si=(p*r*t)/100;
    cout<<"simple interest is : "<<si;
}