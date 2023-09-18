#include<iostream>
using namespace std;


int findUnique(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int A[9] = {1, 2, 3, 4, 2, 1, 3, 5, 4};
    cout<< findUnique(A, 9)<<endl;
    return 0;
}