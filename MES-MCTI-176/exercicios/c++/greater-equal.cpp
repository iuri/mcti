#include <iostream>
# include <math.h>

using namespace std;

int main() {
  int x;
  int y;

  cout << "Insira um numero inteiro" << endl;
  cin >> x;
  cout << "Insira outro inteiro" << endl;
  cin >> y;
  if (x > y) 
    cout << "x = " << x << " maior que " << "y = " << y << endl;
  else if ( x < y)
    cout << "x = " << x << " menor que " << "y = " << y << endl;
  else 
    cout << " numeros iguais" << x << " e " << y << endl;

  return 0;
}
