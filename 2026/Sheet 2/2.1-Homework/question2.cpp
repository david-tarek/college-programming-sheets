#include <iostream>
#include <cmath>
using namespace std;

class Data
{
  float X[30];
  int h;
  string T[30];
  int n;

public:
  void Read() {
    do {
      cout << "Enter h (non-zero): ";
      cin >> h;
    } while (h == 0);

    do {
      cout << "Enter number of elements of X, T (1-30): ";
      cin >> n;
    } while (n < 1 || n > 30);

    cout << "Enter X: \n";
    for (int i = 0; i < n; i++)
    {
      cin >> X[i];
    }

    for (int i = 0; i < n; i++)
    {
      (fmod(X[i], h) == 0 ? T[i] = "Yes" : T[i] = "No");
    }
  }

  float Sum() {
    float sum = 0.0f;
    for (int i = 0; i < n; i++)
    {
      if (T[i] == "No")
      {
        sum += X[i];
      }
    }
    return sum;
  }

  float Avg() {
    float avg = 0.0f, sum = 0.0f;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (T[i] == "Yes")
      {
        sum += X[i];
        count++;
      }
    }
    if (count == 0) {
      return 0;
    }
    avg = sum / count;
    return avg;
  }

  void Display() {
    cout << "h: " << h << endl;
    cout << "n: " << n << endl;
    for (int i = 0; i < n; i++)
    {
      cout << "X[" << i + 1 << "]: " << X[i] << endl;
      cout << "T[" << i + 1 << "]: " << T[i] << endl;
    }
    cout << endl;
  }

  void Compare(Data obj) {
    cout << "\nComparing the averages of X: \n";
    if (Avg() > obj.Avg())
    {
      cout << "The first object has the greater average.\n";
      Display();
    }
    else if (Avg() < obj.Avg())
    {
      cout << "The second object has the greater average.\n";
      obj.Display();
    }
    else
    {
      cout << "Both objects have equal averages.\n";
    }
  }
};

int main() {
  Data obj1, obj2;

  cout << "Enter data for Object 1:\n";
  obj1.Read();

  cout << "\nEnter data for Object 2:\n";
  obj2.Read();

  cout << "\nObject 1:\n";
  obj1.Display();
  cout << "Sum of X elements not divisible by h = " << obj1.Sum() << endl;
  cout << "Average of X elements divisible by h = " << obj1.Avg() << endl;

  cout << "\nObject 2:\n";
  obj2.Display();
  cout << "Sum of X elements not divisible by h = " << obj2.Sum() << endl;
  cout << "Average of X elements divisible by h = " << obj2.Avg() << endl;

  obj1.Compare(obj2);

  return 0;
}
