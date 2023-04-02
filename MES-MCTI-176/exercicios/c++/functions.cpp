#include <iostream>
#include <math.h>

using namespace std;

#define PI 3.14; 

double area_square(double l) {
  return l * l;
}


double area_circle(double r) {
  return pow(r,2) * PI;
}

double area_retangle(double b, double h) {
  return b * h;
}

double area_triangle(double b, double h) {
  return b * h / 2;
}

int main() {
  double x;
  double y;
  int op = 9;
  
  while (op!=0) {
    cout << "Qual area deseja calcular?" << endl;
    cout << "(1) Circulo" << endl;
    cout << "(2) Triangulo" << endl;
    cout << "(3) Quadrado" << endl;
    cout << "(4) Retangulo" << endl;
    cout << "(5) Pentagono" << endl;
    cout << "Digite 0 para sair" << endl;
    cin >> op;
    switch(op) {
    case 1:
      x = 0;
      while (area_circle(x) < 50.0) { 
	cout << "Insira o valor do raio para area maior que 50 " << endl;
	cin >> x;
	if (area_circle(x) < 50) {
	  cout << "Area invalida!" << endl << "Digite novamente o raio" << endl;	  
	} else 
	  break;
      }
      cout << "Area do circulo: " << area_circle(x) << endl;
      break;
    case 2:
      cout << "Insira o valor da base: " << endl;
      cin >> x;
      cout << "Insira o valor da altura: " << endl;
      cin >> y;
      cout << "Area do triangulo: " << area_triangle(x,y) << endl;
      break;
    case 3:
      cout << "Insira o valor do lado: " << endl;
      cin >> x;
      cout << "Area do quadrado: " << area_square(x) << endl;
      break;
    case 4:
      cout << "Insira o valor da base: " << endl;
      cin >> x;
      cout << "Insira o valor da altura: " << endl;
      cin >> y;
      cout << "Area do retangulo: " << area_retangle(x,y) << endl;
      break;
    case 5:
      cout << "Insira o valor da base: " << endl;
      cin >> x;
      cout << "Insira o valor da altura: " << endl;
      cin >> y;
      cout << "Area do Pentagono: " << 5 * area_triangle(x,y) << endl;
      break;
    default:
      break;
    }
  }
  return 0;
}
