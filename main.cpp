#include <iostream>
#include "NumComplexo.h"
using namespace std;
using namespace complexo;

int main() {

char op;
struct tComplexos n1,n2,*res;

LerComplexo (&n1);
LerComplexo (&n2);

cout << "Digite operação desejada? (+,-,/,*,M)" << endl;
cin >> op;

if (op == '+'){
  res = Soma (&n1,&n2);
}

if (op == '-'){
  res = Subtração (&n1,&n2);
}

imprimir (res);

}