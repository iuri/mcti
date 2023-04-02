#include <iostream>
# include <math.h>

using namespace std;

int main() {
  int x;

  cout << "Insira um numero inteiro" << endl;
  cin >> x;
  if (x > 0) 
    cout << "Raiz quadrada: " << sqrt(x) << endl;
  else 
    cout << "Quadrado: " << pow(x,2) << endl;
  

  return 0;
}
