#include<iostream>
#include<stdlib.h>
using namespace std;

struct Area
{
    int length;
    int breadth;
    char a;
};


int main(){
    int x = 10;
    int *p;
    p = &x;
    cout << *p << endl << x; 

// creating a pointer of different data type
    int *a;
    float *b;
    char *c;
    double *d;
    struct Area *e;

// Printing size of different type of pointer
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;


}