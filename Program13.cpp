//wap to delete an element from an array 
#include <iostream>
using namespace std;

int main(){

    int arr[5], user, ind;
    cout<<"Enter elements of array:"<<endl;
    for (int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"Enter element to delete:"<<endl;
    cin>>user;
    for (int i = 0; i < 5; i++)
    {
        if(user==arr[i]){
            ind=i;
            break;
        }
    }
    for (int i=ind; i<5; i++){
        arr[i]=arr[i+1];
        
    }
    arr[4]=NULL;
    for (int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}