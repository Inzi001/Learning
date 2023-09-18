#include<iostream>
using namespace std;
int getMax(int num[], int n){
    int maxi = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
        maxi = max(maxi, num[i]);
        
    }
    return maxi;

}

int getMin(int num[], int n){
    int mini = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
        mini = min(mini, num[i]);
        
    }
    return mini;
    
}

int main(){
    int A[100];
    int size;
    cout<<"Enter size";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
       cin >> A[i];
    }
    cout <<"max: "<<getMax(A, size)<<endl;
    cout <<"min: " <<getMin(A, size);

    
    return 0;
}