#include <bits/stdc++.h>

using namespace std;

void arrswap(int arr[], int size)
{
    cout << "after: ";
    for (int i = 0; i < size; i++)
    {
        swap(arr[i], arr[size - 1 - i]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int num[6] = {2, 7, 1, -4, 11, 12};
    int ans = 0;

    cout << "before: ";
    for (int i = 0; i < 6; i++)
    {
        cout << num[i] << " ";
    }

    arrswap(num,6);
}