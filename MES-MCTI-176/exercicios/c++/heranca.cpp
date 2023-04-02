#include <iostream>
using namespace std;

class Species {
protected:
  string name;
  double age;
public:
  Species() {}
  Species(string name, double age) {
    this->name = name;
    this->age = age;
  }

  void print(void) {
    cout << "Especie: " << this->name << endl;
    cout << "Idade: " << this->age << " milhoes de anos" << endl;
  }

};

class A: public Species {
public:
  A() {
    this->name = "Australopthecus afarensis";
    this->age = 4;
  }
};

class B: public A {
public:
  B() {
    this->name = "Homo habilis";
    this->age = 2.3;
  }
};

class C: public B {
public:
  C() {
    this->name = "Homo Erectus";
    this->age = 1.8;
  }

};

class D: public C {
public:
  D() {
    this->name = "Homo Sapiens";
    this->age = 0.3;
  }
};

class E: public D {
public:
  E() {
    this->name = "Homo Neatherthalensis";
    this->age = 0.3;
  }
};


int main() {
  A s1;
  B s2;
  C s3;
  D s4;
  E s5;

  s1.print(); 
  cout << endl;
  s4.print();
  cout << endl;
  s5.print();
  
  return 0;
}
