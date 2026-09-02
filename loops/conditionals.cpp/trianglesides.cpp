#include<iostream>
using namespace std;
int main(){ int a,b,c;
cout<<"enter the sides of traingle";
cin>>a>>b>>c;
if (a==b and b==c)
cout<<"the triangle is equilateraL";
else if (a==b or b==c or a==c)
cout<<"the triangle is isosceles";
else
cout<<"the triangle is scalene";
}