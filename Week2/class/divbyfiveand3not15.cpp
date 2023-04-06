#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter number :";
    cin>>x;
    if(x%3==0 || x%5==0){
        if(x%15!=0){
            cout<<"div by 3 or 5 but not 15";
        }
        else{
            cout<<"not matching condition";
        }
    }
    else{
            cout<<"not matching condition";
    }
}