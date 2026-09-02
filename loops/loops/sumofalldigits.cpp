#include<iostream>
using namespace std;
int main() { int x, sum = 0;
    cout<<"enter any number";
    cin>>x;
    while(x>0){ int lastdig=x%10;
    sum=sum+lastdig;
x=x/10;
    }
cout<<"the sum of all digits is "<<sum;}