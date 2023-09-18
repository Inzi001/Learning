#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle *p;  // p is a pointer of struct Rectangle type.
    p = (struct Rectangle * ) malloc(sizeof(struct Rectangle)); // in C language
    p = new Rectangle;  // in C++ language
    p->breadth=10;
    cout << p->breadth; 

}