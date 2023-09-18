#include<iostream>
using namespace std;

struct Rectangle 
{
    int length; 
    int breadth;
    char s;
};
/* the size of above struct is 12 because integer takes 4 bytes. character takes 1 byte but in the structure size of 
the all the data types is equal to their maximum size of their data type present in the sturcture.*/
 

int main(){
    struct Rectangle r1;
    r1.breadth = 10;
    r1.length= 20;
    cout<< r1.length * r1.breadth;
    cout<< sizeof(r1);
    cout<< "\"hello\"";
}
    