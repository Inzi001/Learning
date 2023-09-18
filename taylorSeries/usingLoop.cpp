#include<iostream>
using namespace std;

// double taylor(double x, double n){
//     double s = 1;
//     for (; n > 0; n--)
//     {
//         s = 1 + x/n * s;
//     }
//     return s;
    
// }

double taylor(double x, double n){
    static double s = 1;
    if (n == 0)
    {
        return s;
    }
    else{
        s = 1 + x/n * s;
        return taylor(x, n-1);
    }
    
}

int main(){
    int x, n;
    cout<<taylor(4, 4);
    return 0;
}

