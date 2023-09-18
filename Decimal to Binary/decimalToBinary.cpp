#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n, ans = 0, bit = 0, i = 0;
    cin >> n;
    while(n != 0){
        bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
    return 0;
}
// the above code doesn't run correctly.
// the above code run correctly on other compiler



// convesion of negative decimal number into binary

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a negative decimal number: ";
    cin >> n;

    // Convert the negative number to its two's complement representation
    unsigned int positiveEquivalent = static_cast<unsigned int>(-n);
    unsigned int twoComplement = ~positiveEquivalent + 1;

    cout << "Binary representation of " << n << " is: ";

    // Print the binary representation
    int numBits = sizeof(int) * 8; // Assuming int is 32 bits on your system
    for (int i = numBits - 1; i >= 0; i--) {
        int bit = (twoComplement >> i) & 1;
        cout << bit;
    }

    return 0;
}