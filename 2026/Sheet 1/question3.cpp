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

void Reverse(int arr[], int n) {
  for (int i = 0; i < n / 2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
}

int Occurrence(int arr[], int n, int x) {
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == x)
    {
      count++;
    }
  }
  return count;
}

void Sum(int arrA[], int arrB[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arrA[i];
    arrB[i] = sum;
  }
}

int main() {
  int n;
  cout << "Enter number of element: ";
  cin >> n;
  int A[n], B[n];

  cout << "Enter " << n << " elements for Array A: \n";
  Read(A, n);

  cout << "----------------\n";

  cout << "Array A: ";
  Display(A, n);

  cout << "----------------\n";

  Sum(A, B, n);
  cout << "Array B: ";
  Display(B, n);

  cout << "----------------\n";

  Reverse(A, n);
  cout << "Reversed Array A: ";
  Display(A, n);

  int num;
  cout << "Enter value to search: ";
  cin >> num;
  cout << "Occurrence = " << Occurrence(A, n, num) << endl;



  return 0;
}