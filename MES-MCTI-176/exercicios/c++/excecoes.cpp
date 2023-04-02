#include <iostream>
using namespace std;

int main(void) {
  // ler a biblioteca que vai causar o erro para saber qual o tipo de retorno do erro int, float, string, char etc.
  try {
    // throw 20;
    // cot << "dsd";
    throw string("Error!");
  } catch (Exception e) {
    cout << "Ocorreu um erro: " << e << endl;
  } catch (int e) {
    cout << "Ocorreu umn erro: " << e <<  ".\n";
  } catch (string e) {
    cout << "Ocorreu um erro: " << e << ".\n";
  }
  return 0;
}
