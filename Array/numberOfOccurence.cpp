#include<iostream>
using namespace std;


int firstOccurence(int arr[], int key, int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            end = mid -1;
            ans = mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
    
}

int lastOccurence(int arr[], int key, int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            start = mid + 1;
            ans = mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
    
}

int main(){
    int A[10] = { 1, 2, 3, 3, 3, 3, 4, 5 ,6 ,7};
    int first, last, key;
    int count = 0;
    cout<< "Enter a that key to find how many times key occurence in an array";
    cin>>key;
    first = firstOccurence(A, key, 10);
    last = lastOccurence(A, key, 10);
    count = last - first + 1;
    cout<<count<<" times "<< key<<" occur in an array";
    return 0;
}