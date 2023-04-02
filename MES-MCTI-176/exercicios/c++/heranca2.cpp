#include <iostream>
using namespace std;

class Polygon {
protected:
  float width;
  float height;
  
public:
  Polygon();
  Polygon(float w, float h) {
    this->width = w;
    this->height = h;
  }

  // Polimorfismo * acrescentar virtual na assinatura
  virtual float calcArea() {
    return this->width * this->height;
  }
};


// heranca da classe polygon simbolo ":"
class Triangle : Polygon {

public:
  // sobrecarga de construtores 
  Triangle(float w, float h) : Polygon(w,h) { }

  // sobrecarga / sobreescrita 
  float calcArea() {
    return (this->width * this->height) / 2;
  }
}; 

int main(void) {
  Polygon p(4,5);
  cout << "Area do poligono: " << p.calcArea() << endl;

  Triangle t(4,5);
  cout << "Area do triangulo: " << t.calcArea() << endl;

  return 0;
}
