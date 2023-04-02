#include <iostream>
using namespace std;

int quadrado(int x) {
  return x * x;
}

double quadrado(double x) {
  return x * x;
}

// Declaracoes da main()
// int main(int argc char *argv[]) {}
// int main(int argc char *argv[], char **env) {}
int main(void) {
  int x1;
  double x2;

  cout << "Digite um numero inteiro: " << endl;
  cin >> x1;

  cout << "Digite um numero real: " << endl;
  cin >> x2;

  cout << "O quadrado de " << x1 << " e igual a: " << quadrado(x1) << endl;
  cout << "O quadrado de " << x2 << " e igual a: " << quadrado(x2) << endl;

  return 0;
}
