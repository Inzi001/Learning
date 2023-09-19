#include<iostream>
using namespace std;
int binarySearch(int a[], int start, int end, int key){
    int mid = start + (end - start)/2;
    if (start > end){
        cout<<"Not found";
        return 0;
    }   
    if (a[mid] == key){
        cout<<"found";
    }
    else if (a[mid] > key)
    {
        binarySearch(a, start, mid - 1, key);
    }
    else{
        binarySearch(a, mid + 1, end, key);
    }
    
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 7;
    int s = 0;
    int e = size - 1;
    int key = 6;
    binarySearch(arr, s, e, key);
    cout<<"hello";
    return 0;
}