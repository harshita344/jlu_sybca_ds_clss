// Write a program to create an array1 of 10 elements. Array1 has all the value input by the user.//
// Now create an array2 having all the value twice of the array1
#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10},sum=0;
    for(int i=0;i<10;i++){
        sum+=arr[i];
    }
    cout<<"Sum of array elements: "<<sum<<endl;
    return 0;
}
