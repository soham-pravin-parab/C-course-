#include <iostream>
#include <cmath>
using namespace std;

bool Armstrong(int n) {
    int copyN = n;

    
    int digits = 0;
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    
    int sum = 0;
    temp = n;
    while (temp != 0) {
        int dig = temp % 10;
        sum += pow(dig, digits);
        temp /= 10;
    }

    
    return sum == copyN;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (Armstrong(n)) {
        cout << n << " is an Armstrong number";
    } else {
        cout << n << " is not an Armstrong number";
    }

    return 0;
}