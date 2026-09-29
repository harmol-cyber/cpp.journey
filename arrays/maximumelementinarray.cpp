#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in array:";
    cin>>n;
    int arr[n];
    
for (int i=0;i<n;i++){
        cin>>arr[i];
}
int ptr1 =  arr[0];
for (int i=0;i<n;i++){
        if(arr[i]>ptr1){
            ptr1 = arr[i];
        }
    }
    cout<<"the maximum element in the array is:"<<ptr1<<endl;
    return 0;
}