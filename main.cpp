#include <iostream>
using namespace std;

struct tComplexos{
  double real;
  double imag;
};

void LerComplexo (struct tComplexos *nc){

cout << "Parte real" << endl;
cin >> nc->real;
cout << "Parte imaginaria" << endl;
cin >> nc->imag;

}

struct tComplexos* Soma (struct tComplexos *nc1, struct tComplexos *nc2){
struct tComplexos *ncRes = (struct tComplexos*)malloc(sizeof(struct tComplexos));
ncRes->real = nc1->real + nc2->real;
ncRes->imag = nc1->imag + nc2->imag;
return ncRes;

}

void imprimir (struct tComplexos *res){

cout << "Resultado = " << res->real <<" j"<< res->imag;

}
int main() {

struct tComplexos n1,n2,*res;
LerComplexo (&n1);
LerComplexo (&n2);
res = Soma (&n1,&n2);
imprimir (res);

}