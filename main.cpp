#include <iostream>
#include <format>
#include <cmath>

using std::cout;
using std::cin;
using std::format;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= std::sqrt(n); i +=2) {  
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number = 0;
    bool result = false;

    cout << "Please enter a number: ";
    cin >> number;

    if (is_prime(number)) {
            cout << format("{} is a prime number", number);
    } else {
            cout << format("{} is not a prime number", number);
    }

    return 0;
}