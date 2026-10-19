#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// (a) Check whether two integers are divisible by each other.
// The undefined case (0, 0) and division by zero return false.
bool isDivisible(int a, int b) {
    if (a == 0 && b == 0) {
        return false;
    }
    if (a == 0) {
        return b != 0; // 0 is divisible by any non-zero number
    }
    if (b == 0) {
        return false;  // division by zero is not allowed
    }
    return (a % b == 0) || (b % a == 0);
}

// (b) Greatest common divisor using Euclid's algorithm.
// Negative numbers are converted to positive first.
long long gcd(long long a, long long b) {
    a = llabs(a);
    b = llabs(b);

    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

// (c) Check whether a float number is prime.
// Only whole numbers greater than 1 can be prime.
bool isPrime(float number) {
    if (number != floor(number)) {
        return false;
    }

    long long n = static_cast<long long>(number);
    if (n < 2) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }

    for (long long divisor = 3; divisor * divisor <= n; divisor += 2) {
        if (n % divisor == 0) {
            return false;
        }
    }
    return true;
}

// (d) Reverse the digits of an integer.
long long reverseNumber(long long number) {
    bool negative = number < 0;
    number = llabs(number);

    long long reversed = 0;
    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    return negative ? -reversed : reversed;
}

// (e) Count the digits of an integer.
int countDigits(long long number) {
    number = llabs(number);
    if (number == 0) {
        return 1;
    }

    int count = 0;
    while (number > 0) {
        ++count;
        number /= 10;
    }
    return count;
}

int main() {
    int a, b;
    cout << "Enter two integers for divisibility and GCD: ";
    cin >> a >> b;

    cout << "Divisible by each other: "
         << (isDivisible(a, b) ? "Yes" : "No") << '\n';
    cout << "GCD: " << gcd(a, b) << '\n';

    float number;
    cout << "Enter a number to test for prime: ";
    cin >> number;
    cout << "Prime: " << (isPrime(number) ? "Yes" : "No") << '\n';

    long long integer;
    cout << "Enter an integer to reverse and count digits: ";
    cin >> integer;
    cout << "Reversed: " << reverseNumber(integer) << '\n';
    cout << "Number of digits: " << countDigits(integer) << '\n';

    return 0;
}
