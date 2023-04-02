#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int x;

  cout << "Insira um numero inteiro" << endl;
  cin >> x;

  if (x > 0) {
    cout << "Quadrado: " << pow(x,2) << endl;
    cout << "Raiz quadrada: " << sqrt(x) << endl;
  } else 
    cout << "Numero irracional" << endl;
  

  return 0;
}
