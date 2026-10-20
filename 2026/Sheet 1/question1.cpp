#include <iostream>
using namespace std;

bool IsDivisible(int a, int b) {
  if (b == 0) {
    return false;
  }
  return (a % b == 0 || b % a == 0);
}

int GCD(int a, int b) {
  if (a < 0) a = -a;
  if (b < 0) b = -b;
  if (a == 0) {
    return b;
  }
  if (b == 0) {
    return a;
  }
  int smaller = (a < b ? a : b), result = 1;
  for (int i = 1; i <= smaller; i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      result = i;
    }
  }
  return result;
}

bool Prime(float num) {
  int n = num;
  if (n != num)
  {
    return false;
  }
  if (n < 2)
  {
    return false;
  }
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

int Reverse(int a) {
  int digit, reverse = 0;
  while (a != 0)
  {
    digit = a % 10;
    reverse = (reverse * 10) + digit;
    a /= 10;
  }
  return reverse;
}

int NumOfDigit(int a) {
  int count = 0;
  if (a == 0) {
    return 1;
  }
  while (a != 0)
  {
    a /= 10;
    count++;
  }
  return count;
}

int main() {
  int x, y;
  cout << "Enter two integers: ";
  cin >> x >> y;
  cout << "Divisible by each other: " << (IsDivisible(x, y) ? "Divisible\n" : "Not Divisible\n");
  cout << "GCD: " << GCD(x, y) << endl;

  float z;
  cout << "Enter a float number to check is prime: ";
  cin >> z;
  cout << "Prime: " << (Prime(z) ? "Prime\n" : "Not Prime\n");

  int w;
  cout << "Enter an integer to reverse and num of digit: ";
  cin >> w;
  cout << "Reversed: " << Reverse(w) << endl;
  cout << "Number of digits: " << NumOfDigit(w) << endl;

  return 0;
}