#include <iostream>
using namespace std;

class Retangle {
protected:  // private / protected / public
  // attributes/properties
  double height;
  double width;

  // methods 
public:
  // Constructors
  Retangle (); 
  Retangle(double w, double h) {
    this->width = w;
    this->height = h;
  }

  // Destructor
  ~Retangle() { 
    cout << "Objeto Destruido" << endl;
  }

  void setProps(double b, double h) {
    height = h;
    width = b;
  }

  void calcArea() {
    cout << this->height * this->width << endl;
  }

  void display_msg(void) {
    cout << "Hello World" << endl;
  }
};


int main() {
  Retangle retangle(0,0);
  double b;
  double h;

  retangle.display_msg();

  cout << "Insira a altura do retangulo: " << endl;
  cin >> h;
  cout << "Insira a base do retangulo: " << endl;
  cin >> b;

  retangle.setProps(b, h);  
  retangle.calcArea();



  return 0;
}
