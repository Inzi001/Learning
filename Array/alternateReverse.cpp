#include<iostream>
using namespace std;

// swap is a built-in function in C++ that use for swapping an element
// that's why I name my function name 'swap1'. It works similarly to the swap function.
void swap1(int *m, int *n){
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}
void reverse(int arr[], int start, int end, int size){
    while (end < size)
    {
        swap1(&arr[start], &arr[end]);
        start += 2;
        end += 2;
    }
       
}

int main(){
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,};
    cout<< "Before reversed"<<endl;
    for (int i = 0; i < 9; i++)
    {
        cout<< A[i]<<" ";
    }
    reverse(A, 0, 1, 9);
    cout<<endl<<"After reversed"<<endl;
    for (int i = 0; i < 9; i++)
    {
        cout<< A[i]<<" ";
    }
    
    return 0;
}