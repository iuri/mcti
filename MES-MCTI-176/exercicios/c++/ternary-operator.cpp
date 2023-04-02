#include <iostream>
# include <math.h>

using namespace std;

int main() {
  int x;
  // int y = 22;

  cout << "Insira um numero inteiro" << endl;
  cin >> x;
  x%2 == 0 ? cout << "Par" << endl : cout << "Impar" << endl;
  
  return 0;
}
