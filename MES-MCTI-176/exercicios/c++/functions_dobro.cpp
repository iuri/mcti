#include <iostream>
#include <math.h>

using namespace std;

int dobro(int n) {
  return 2 * n;
}

int sinal(int n) {
  if (n < 0) 
    return -1; 
  else if (n > 0) 
    return 1;
  else
    return 0;
}
 

int main() {
  int n;
  cout << "Digite um numero inteiro" << endl;
  cin >> n;
  cout << "O dobro de " << n << " e igual a " << dobro(n) << endl;

  cout << "Sinal de n:" <<  sinal(n) << endl;  
  return 0;
}
