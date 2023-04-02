#include <iostream>
using namespace std;


// standard template library;
// quando se deseja criar uma versao generica para ser retuilizada ao longo do codigo.
template <class T>
T tmax(T a, T b) {
  return a > b ? a : b;
}

int main(void) {
  cout << "O maior valor entre " << 1 << " e " << 2 << " eh " << tmax(1,2) << ".\n";
  cout << "O maior valor entre " << 3.2 << " e " << 3.7 << " eh " << tmax<float>(3.2,3.7) << endl;


  return 0;
}
