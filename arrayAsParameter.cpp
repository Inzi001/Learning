#include<iostream>
using namespace std;

// void fun(int B[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<B[i]<<endl;
//     }
    
// }

// int main(){
//     int A[5] = {2, 4, 6, 8, 10};
//     fun(A, 5);
// }


int * fun(int n){
    int *p;
    p = new int[n];
    return p; // return array of size n
}

int main(){
    int *A;
    A = fun(5); 
}
