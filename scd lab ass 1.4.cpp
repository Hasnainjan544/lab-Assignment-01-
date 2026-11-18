
#include <iostream>
using namespace std;

int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

bool isArmstrong(int num) {
    if (num < 0)
        return false;

    int original = num;
    int temp = num;
    int digits = 0;
    int sum = 0;

    do {
        digits++;
        temp /= 10;
    } while (temp != 0);

    temp = num;

    do {
        int digit = temp % 10;
        sum += power(digit, digits);
        temp /= 10;
    } while (temp != 0);

    return sum == original;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    }
    else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}

