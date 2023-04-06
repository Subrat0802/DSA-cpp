#include<iostream>
using namespace std;
int main(){
    int l,w;
    cout<<"length :";
    cin>>l;
    cout<<"width :";
    cin>>w;

    int area=l*w;
    int peri=2*(l+w);
    if(area>peri){
        cout<<"Area is greater than perimeter";
    }
    else{
        cout<<"perimeter is greater than area";
    }
    
}
// Given the length and breadth of a rectangle, write a program to find whether numerically the area of
// the rectangle is greater than its perimeter.
// Input 1: length = 5 breadth = 7

// Output 1: Area is greater than perimeter.