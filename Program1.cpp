//Write a program to all the evenn numbers between 0 and 20
#include <iostream>
using namespace std;
int main() {
    {int ar [11];
       int num=0;
    for (int i = 0; i < 11; i++) 
    {if(num%2==0) 
    {ar[i] = num;
            num += 2;
    }
    }
    for (int i = 0; i < 11; i++) {
        cout << ar[i] << " ";
    }
}
    return 0;
}