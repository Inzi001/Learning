#include<iostream>
using namespace std;
bool binarySearch(int arr[], int key, int size){
    int start = 0;
    int end = size - 1;
    int  mid = start + (end - start) / 2;
    while(start <= end)
    {  
        if(arr[mid] == key){
            return true;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
    
}

int main(){
    int key;
    bool found;
    cout<<"Enter key to find that key is present in arrya or not: ";
    cin>>key;
    int A[18] = {1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 19, 20};
    found = binarySearch(A, key, 18);
    if (found)
    {
        cout<< "key is present";
    }
    else{
        cout<< "key is not present";

    }
    
    return 0;
}