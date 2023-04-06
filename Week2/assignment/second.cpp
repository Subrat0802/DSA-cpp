// Given the radius of the circle, predict whether numerically the area of this circle is larger than the
// circumference or not.
// Input 1: radius = 4
// Output 1: Area is greater than circumference.
// Explanation: area = 3.14 * 4 * 4 = 50.24 unit2
// Perimeter = 2 * 3.14 * 4 = 25.12 unit
// Therefore area > perimeter.
#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter r :";
    cin>>r;
    int area=3.14*r*r;
    int perimeter=2*3.14*r;
    if(area>perimeter){
        cout<<"area is greater > perimeter :"<<area;
    }
    else{
        cout<<"perimeter is greater > area :"<<perimeter;
    }
}