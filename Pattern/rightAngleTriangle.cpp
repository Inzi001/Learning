#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    
    //upward triangle
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n - i; j++)
       {
            cout<<"* ";
       }
       cout<<endl;
    }

    cout<<endl<<endl;

    //downward triangle
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j <= i; j++)
       {
            cout<<"* ";
       }
       cout<<endl;
    }
    
    
    return 0;
}