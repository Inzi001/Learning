#include<iostream>
using namespace std;
void linearSearch(int a[], int key, int size){
    if (size == 0){
        cout<<"Not found";
    }
    if (a[0] == key)
    {
        cout<<"found";
    }
    else{
        linearSearch(a+1, key, size-1);
    }
    
    
}

int main(){
    int arr[] = {1, 2, 7, 4, 5, 0, 9};
    linearSearch(arr, 4, 7);
    return 0;
}