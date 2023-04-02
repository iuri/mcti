#include <iostream>
# include <math.h>

using namespace std;

int main() {
  int i = 1;
  int count = 0;
  while (count < 5) {
    if (i%3==0) {
      cout << i << endl;
      count++;
    }
    i++;  
  }
   
  
  return 0;
}
