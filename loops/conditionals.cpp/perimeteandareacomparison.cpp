#include<iostream>
using namespace std;
int main() { int length , width;
cout<<"enter the length of rectangle:";
cin>>length;
cout<<"enter the width of rectangle:";
cin>>width;
int perimeter , area;
perimeter=2*(length+width);
area=length*width;
if (perimeter>area)
cout<<"perimeter is greater than area";
else if (perimeter<area)
cout<<"area is greater than or equal to perimeter";
else
cout<<"perimeter is equal to area";
}