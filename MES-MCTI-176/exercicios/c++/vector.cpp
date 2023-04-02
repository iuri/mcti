#include <iostream>

using namespace std;

class Vector {
  double x;
  double y;
  double z;

public:
  // Contructors
  Vector() {}
  Vector(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
  }

  Vector operator + (Vector a) {
    Vector temp;
    temp.x = x + a.x;
    temp.y = y + a.y;
    temp.z = z + a.z;
    return temp;
  }

  void printVector() {
    cout << this->x << ", " << this->y << ", " << this->z << endl;

  }

};

int main() {
  Vector *v1 = new Vector(0,0,0);  // pointers
  // Vector v1(1,1,1);
  Vector v2(2,2,2);
  Vector v3;

  v3 = *v1 + v2; 
  v3.printVector();
  return 0;
}
