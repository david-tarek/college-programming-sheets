#include <iostream>
using namespace std;

class Data {
  float D[30];
  char T[10];
  int n;

public:
  int Fact(int num) {
    int fact = 1;
    if (num < 0) {
      return 0;
    }
    for (int i = 1; i <= num; i++)
    {
      fact *= i;
    }
    return fact;
  }

  bool Prime(int num) {
    if (num < 2)
    {
      return false;
    }
    for (int i = 2; i < num; i++)
    {
      if (num % i == 0)
      {
        return false;
      }
    }
    return true;
  }

  void Read() {
    do {
      cout << "Enter n (1-10): ";
      cin >> n;
    } while (n < 1 || n > 10);

    cout << "Enter " << n << " values for D (non-negative integers):\n";
    for (int i = 0; i < n; i++)
    {
      cin >> D[i];
      (Prime((int)D[i]) ? T[i] = 'Y' : T[i] = 'N');
    }
  }

  float Sum() {
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
      if (T[i] == 'Y')
      {
        sum += Fact((int)D[i]);
      }
    }
    return sum;
  }

  float Prod() {
    float Product = 1;
    for (int i = 0; i < n; i++)
    {
      if (T[i] == 'N' && D[i] != 0)
      {
        Product *= Fact((int)D[i]);
      }
    }
    return Product;
  }

  void Display()
  {
    cout << "\nNumber of elements: " << n << '\n';
    cout << "---------------------\n";
    cout << "Index\tD\tT\n";
    cout << "---------------------\n";

    for (int i = 0; i < n; i++)
    {
      cout << i + 1 << '\t' << D[i] << "\t" << T[i] << endl;
    }

    cout << "---------------------\n";
    cout << "\nSum of factorials of prime elements = " << Sum() << endl;
    cout << "Product of factorials of non-prime non-zero elements = " << Prod() << endl;
  }
};

int main() {

  Data obj;

  obj.Read();
  obj.Display();

  return 0;
}