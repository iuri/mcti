#include <iostream>

#include <stdio.h>
using namespace std;

namespace numeric {
  float pi = 3.1415269;
}


// numero: caracteristica e mantissa 
int main() {
  cout << "Numero PI: " << numeric::pi << endl;
  

  printf("Numero PI: %0.7f \n", numeric::pi);

    return 0;
}
