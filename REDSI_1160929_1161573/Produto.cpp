#include "Produto.h"
#include "stdafx.h"

using namespace std;

Produto::Produto(){
    //ctor
}

Produto::~Produto(){
    //dtor
}

string Produto::toString(bool n){
	return string();
}

int Produto::getID(){
	return 0;
}

string Produto::getMarca(){
	return string();
}


string Produto::getModelo(){
	return 0;
}

bool Produto::operator==(Produto *p) const{
	return (id == p->getID()) ? true : false;
}
