#include<iostream>
using namespace std;

bool linearSearch(int arr[], int key, int size){
    
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {   
            return true;  
        }      
    } 
    return false;
}

int main(){
    int key;
    bool found;
    cout<<"Enter key to find that key is present in arrya or not: ";
    cin>>key;
    int A[] = {1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 19, 20};
    int size = sizeof(A)/sizeof(A[0]);
    found = linearSearch(A, key, size);
    if (found)
    {
        cout<< "key is present";
    }
    else{
        cout<< "key is not present";

    }
    
    return 0;
}