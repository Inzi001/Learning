#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countSort(int a[], int n){
    vector<int>temp(9, 0);
    for (int i = 0; i < n; i++)
    {
        int index = a[i];
        temp[index]++;
    }
    int j = 0;
    for (int i = 0; i < 9; i++)
    {
        while (temp[i]--)
        {
            a[j++] = i;

        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
    
}

int main(){
    int arr[] = {5, 3, 1, 4, 2, 0, 4, 5};
    countSort(arr, 8);
    return 0;
}