#include <iostream>
using namespace std;

void Read(int arr[], int n) {
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

void Display(int arr[], int n) {
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int Search(int arr[], int n, int x) {
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == x)
    {
      return i;
    }
  }
  return -1;
}

void Replace(int arr[], int n, int old, int newNum) {
  int i = Search(arr, n, old);
  if (i != -1)
  {
    arr[i] = newNum;
  }
}

void Swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

void Sort(int arr[], int n) {
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        Swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int main() {
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  int arr1[n], arr2[n], arr3[n];

  cout << "Enter " << n << " elements for Array 1: \n";
  Read(arr1, n);
  cout << "Enter " << n << " elements for Array 2: \n";
  Read(arr2, n);
  cout << "Enter " << n << " elements for Array 3: \n";
  Read(arr3, n);

  cout << "----------------\n";

  cout << "Array 1: ";
  Display(arr1, n);
  cout << "Array 2: ";
  Display(arr2, n);
  cout << "Array 3: ";
  Display(arr3, n);

  cout << "----------------\n";

  int num;
  cout << "Enter value to search: ";
  cin >> num;
  cout << "Array 1: " << (Search(arr1, n, num) != -1 ? "Found" : "Not Found") << "\n";
  cout << "Array 2: " << (Search(arr2, n, num) != -1 ? "Found" : "Not Found") << "\n";
  cout << "Array 3: " << (Search(arr3, n, num) != -1 ? "Found" : "Not Found") << "\n";

  int New;
  cout << "Enter replacement value: ";
  cin >> New;
  Replace(arr1, n, num, New);
  Replace(arr2, n, num, New);
  Replace(arr3, n, num, New);

  cout << "After replacement:\n";
  cout << "Array 1: ";
  Display(arr1, n);
  cout << "Array 2: ";
  Display(arr2, n);
  cout << "Array 3: ";
  Display(arr3, n);

  cout << "----------------\n";

  Sort(arr1, n);
  Sort(arr2, n);
  Sort(arr3, n);

  cout << "Final: \n";
  cout << "Array 1: ";
  Display(arr1, n);
  cout << "Array 2: ";
  Display(arr2, n);
  cout << "Array 3: ";
  Display(arr3, n);

  return 0;
}