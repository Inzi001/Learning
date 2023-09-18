#include<iostream>
using namespace std;


int main(){
    //convert numeric value to string.
    int num = 743;
    string str = to_string(num); 
    str += "2";
    cout<<str;
    return 0;
}