#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Data
{
  string name;
  int ID;
  float age, G[7], GPA, avg;

  void Read() {
    cout << "Enter name: ";
    getline(cin >> ws, name);
    cout << "Enter ID: ";
    cin >> ID;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter 7 Grades: \n";
    float sum = 0.0f;
    for (int i = 0; i < 7; i++)
    {
      cin >> G[i];
      sum += G[i];
    }
    avg = sum / 7.0f;
    cout << "Average = " << fixed << setprecision(2) << avg << endl;
    cout << "Enter GPA: ";
    cin >> GPA;
    cout << "\n---------------------\n";
  }

  void DisplayData() {
    cout << "Name: " << name << '\n';
    cout << "ID: " << ID << '\n';
    cout << "Age: " << age << '\n';

    cout << "Grades: ";
    for (int i = 0; i < 7; i++) {
      cout << G[i] << " ";
    }
    cout << "\n";

    cout << "Average: " << avg << '\n';
    cout << "GPA: " << GPA << '\n';
    cout << "--------------------\n";
  }
};

struct Student
{
  Data S[20];
  int n;

  void Read() {
    do {
      cout << "Enter number of students (1-20): ";
      cin >> n;
    } while (n < 1 || n > 20);
    for (int i = 0; i < n; i++)
    {
      cout << "\nEnter data for student " << i + 1 << ": \n";
      S[i].Read();
    }
  }

  void Sort() {
    for (int i = 0; i < n - 1; i++)
    {
      for (int j = 0; j < n - i - 1; j++)
      {
        if (S[j].avg > S[j + 1].avg)
        {
          Data temp = S[j];
          S[j] = S[j + 1];
          S[j + 1] = temp;
        }
      }
    }
  }

  Data Max() {
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
      if (S[i].GPA > S[maxIndex].GPA)
      {
        maxIndex = i;
      }
    }
    return S[maxIndex];
  }

  void DisplayTable() {
    cout << "=====================================\n";
    cout << "             STUDENTS\n";
    cout << "=====================================\n";
    cout << "Number of students: " << n << '\n';

    cout << left
         << setw(5) << "ID"
         << setw(15) << "Name"
         << setw(6) << "Age";
    for (int j = 0; j < 7; j++) {
      cout << setw(7) << ("G" + to_string(j + 1));
    }
    cout << setw(7) << "GPA" << setw(8) << "Avg" << '\n';

    cout << string(90, '-') << '\n';

    for (int i = 0; i < n; i++)
    {
      cout << left
           << setw(5) << S[i].ID
           << setw(15) << S[i].name
           << setw(6) << S[i].age;
      for (int j = 0; j < 7; j++) {
        cout << setw(7) << S[i].G[j];
      }
      cout << setw(7) << S[i].GPA
           << setw(8) << S[i].avg << '\n';
    }

    cout << string(90, '-') << '\n';
  }

};


int main() {
  Student stud;

  cout << "Enter Data: \n";
  stud.Read();

  cout << "\nData before: \n";
  stud.DisplayTable();

  stud.Sort();
  cout << "\nData after sorting by average: \n";
  stud.DisplayTable();

  Data topStudent = stud.Max();
  cout << "\nStudent with the Maximum GPA: \n";
  topStudent.DisplayData();

  return 0;
}