namespace complexo{
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
cout << endl;

}
//SOMA
struct tComplexos* Soma (struct tComplexos *nc1, struct tComplexos *nc2){
  struct tComplexos *ncRes = (struct tComplexos*)malloc(sizeof(struct tComplexos));
  ncRes->real = nc1->real + nc2->real;
  ncRes->imag = nc1->imag + nc2->imag;
  return ncRes;
}

//SUBTRAÇÃO
struct tComplexos* Subtração (struct tComplexos *nc1, struct tComplexos *nc2){
  struct tComplexos *ncRes = (struct tComplexos*)malloc(sizeof(struct tComplexos));
  ncRes->real = nc1->real - nc2->real;
  ncRes->imag = nc1->imag - nc2->imag;
  return ncRes;
}

//MULTIPLICAÇÃO
struct tComplexos* Multiplicação (struct tComplexos *nc1, struct tComplexos *nc2){
  struct tComplexos *ncRes = (struct tComplexos*)malloc(sizeof(struct tComplexos));
  ncRes->real = (nc1->real * nc2->real)+(nc1->imag * nc2->imag * -1);
  ncRes->imag = (nc1->real * nc2->imag)+(nc1->imag * nc2->real);
  return ncRes;
}

//DIVISÃO
struct tComplexos* Divisão (struct tComplexos *nc1, struct tComplexos *nc2){
  struct tComplexos *ncRes = (struct tComplexos*)malloc(sizeof(struct tComplexos));
  ncRes->real = ((nc1->real * nc2->real)+(nc2->imag * nc1->imag))/((nc2->real * nc2->real)+(nc2->imag * nc2->imag));
  ncRes->imag = ((nc1->imag * nc2->real)-(nc1->real * nc2->imag))/((nc2->real * nc2->real)+(nc2->imag * nc2->imag));
  return ncRes;
}


void imprimir (struct tComplexos *res){

  if (res->imag >= 0){
    cout << "Resultado = " << res->real <<"+"<< res->imag <<"i";
  }
  else{
    cout << "Resultado = " << res->real << res->imag <<"i";
  }

}

}