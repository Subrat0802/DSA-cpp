#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter number :";
    cin>>x;
    if(x%3==0 && x%5==0){
        cout<<"Number is divisible by three and five";
    }
    else{
        cout<<"not divisible by 3 and 5";
    }
}