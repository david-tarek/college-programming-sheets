#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
  float x, y, z;
};

class Point_3D {
  Point P[30];
  float N[30];
  int m;

public:
  void Read() {
    do {
      cout << "Enter number of elements: ";
      cin >> m;
    } while (m < 1 || m > 30);
    cout << "Enter a value of 3D points: \n";
    for (int i = 0; i <= m - 1; i++)
    {
      cin >> P[i].x >> P[i].y >> P[i].z;
      N[i] = sqrt(pow(P[i].x, 2) + pow(P[i].y, 2) + pow(P[i].z, 2));
    }
  }

  float Distance() {
    float dx, dy, dz, distance = 0;
    dx = P[0].x - P[m - 1].x;
    dy = P[0].y - P[m - 1].y;
    dz = P[0].z - P[m - 1].z;
    distance = sqrt(pow(dx, 2) + pow(dy, 2) + pow(dz, 2));
    return distance;
  }

  float MaxNorm() {
    float max = N[0];
    for (int i = 0; i <= m - 1; i++)
    {
      if (max < N[i])
      {
        max = N[i];
      }
    }
    return max;
  }

  Point_3D Compare(Point_3D other) {
    return (MaxNorm() >= other.MaxNorm() ? *this : other);
  }

  float MinDistance(Point_3D other) {
    float D1 = Distance();
    float D2 = other.Distance();
    return (D1 < D2 ? D1 : D2);
  }

  void Display() {
    cout << "=====================================\n";
    cout << "                Data          \n";
    cout << "=====================================\n";
    cout << "Index\tX\tY\tZ\tNorm\n";
    cout << "-------------------------------------\n";
    for (int i = 0; i < m; i++)
    {
      cout << i + 1 << "\t";
      cout << P[i].x << "\t";
      cout << P[i].y << "\t";
      cout << P[i].z << "\t";
      cout << N[i] << endl;
    }
    cout << "------------------------------------\n";
    cout << "Max Norm = " << MaxNorm() << endl;
    cout << "Distance First-Last = " << Distance() << endl;
  }
};


int main() {
  Point_3D obj1;
  Point_3D obj2;

  cout << "Enter data for Object 1:\n";
  obj1.Read();

  cout << "\nEnter data for Object 2:\n";
  obj2.Read();

  cout << "\nObject 1:\n";
  obj1.Display();

  cout << "\nObject 2:\n";
  obj2.Display();

  Point_3D result = obj1.Compare(obj2);

  cout << "\nObject with Maximum Norm:\n";
  result.Display();

  cout << "\nMinimum Distance = "
    << obj1.MinDistance(obj2) << endl;

  return 0;
}