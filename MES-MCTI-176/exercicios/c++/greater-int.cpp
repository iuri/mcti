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
  x > y ? cout << "x = " << x << " maior que " << "y = " << y << endl : cout << "x = " << x << " menor que " << "y = " << y << endl;

  return 0;
}
