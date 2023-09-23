#include<iostream>
using namespace std;
void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void bubbleSort(int arr[], int size){
    if (size == 0 || size == 1)
    {
        return ;
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
        
    }
    bubbleSort(arr, size -1);
    
}

int main(){
    int a[] = {4, 2, 1, 8, 7, 6, 9, 1, 4};
    cout<<"Before sort : ";
    print(a, 9);
    bubbleSort(a, 9);
    cout<<endl<<endl;
    cout<<"After sort : ";
    print(a, 9);
    return 0;
}