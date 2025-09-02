#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value: ";
    cin >> n;

    int sum = n * (n + 1) / 2;
    int squareOfSum = sum * sum;

    cout << "Square of the sum of first " << n << " natural numbers is: " 
         << squareOfSum << endl;

    return 0;
}


