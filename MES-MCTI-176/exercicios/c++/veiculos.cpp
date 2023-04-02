#include <iostream>
using namespace std;

class Veiculo {
protected:
  string fabricant;
  string model;
  string type;
  string color;
  int year;
  double cilinders;
  double price;
  bool ac;
  bool ss;

private:
  string getProps() {
    return this->model;
  }


public:
  Veiculo() {}
  Veiculo(string fabricant, string model, string type, string color, int year, double cilinders, double price, bool ac, bool ss) {
    this->fabricant = fabricant;
    this->model = model;
    this->type = type;
    this->color = color;
    this->year = year;
    this->cilinders = cilinders;
    this->price = price;
    this->ac = ac;
    this->ss = ss;
  }

  int setProps(string fabricant, string model, string type, string color, int year, double cilinders, double price, bool ac, bool ss) {
    this->fabricant = fabricant;
    this->model = model;
    this->type = type;
    this->color = color;
    this->year = year;
    this->cilinders = cilinders;
    this->price = price;
    this->ac = ac;
    this->ss = ss;
    return 0;
  }

  double getPrice() {
    if (this->ac) { 
      this->price = this->price + this->price*0.01;
    }
    if (this->ss) { 
      this->price = this->price + this->price*0.02;
    }
    return this->price;
  }

  

  void print() {
    cout << "Model: " << getProps() << endl;
    cout << this->fabricant << endl;
    cout << this->type << endl;
    cout << this->color << endl;
    cout << this->year << endl;
    cout << this->cilinders << endl;
    cout << this->ac << endl;
    cout << this->ss << endl;
    cout << this->price << endl;
  }
  


};

int main(void) {
  cout << "Bemvindo ao exercicio 4, questao 2!" << endl;

  Veiculo v1("ford", "escort", "carro", "vermelho", 1996, 4, 9765.65, false, false);
  Veiculo v2;

  v2.setProps("fiat", "pulse", "carro", "azul", 2023, 8, 105650.89, true, true);

  v2.print();

  return 0;
}
