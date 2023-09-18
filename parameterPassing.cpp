#include<iostream>
using namespace std;
// call by value
// void swap(int x, int y){
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }

// call by address
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// call by reference
// void swap(int &x, int &y){
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }
int main(){
    int a,b;
    cout<<"Enter the values of a: ";
    cin>>a;
    cout<<"Enter the values of b: ";
    cin>>b;
    // swap(a, b); // call by value & call by reference
    swap(&a, &b); // call by address
    cout<<"The values of a and b after swaping: ";
    cout<<a<<endl<<b;
}
// the value of a and b are remains same. 




