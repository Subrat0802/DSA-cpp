// If the marks of A, B and C are input through the keyboard, write a program to determine the student
// scoring the least marks.
// Input 1: A = 23 , B = 34 , C = 71
// Output : ‘A’ has the least marks.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"number of a :";
    cin>>a;
    cout<<"number of b :";
    cin>>b;
    cout<<"number of c :";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"a is greatest";
        }
        else{
            cout<<"c is greatest";
        }
    }
    else{
        if(b>c){
            cout<<"b is greatest";
        }
        else{
            cout<<"c is greatest";
        }
    }
}