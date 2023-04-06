#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"length of a";
    cin>>a;
    cout<<"length of b";
    cin>>b;
    cout<<"length of c";
    cin>>c;

    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<"This is an Isosceles triangle";
    }
    else{
        cout<<"This is not an Isosceles triangle";
    }
}
// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
// isosceles triangle.
// Input : side1 = 5 side2 = 4 side3 = 4
// Output: This is an Isosceles triangle.