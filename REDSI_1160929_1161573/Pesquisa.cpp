#include "Pesquisa.h"
#include "stdafx.h"

using namespace std;

Pesquisa::Pesquisa()
{
    //ctor
}

Pesquisa::~Pesquisa()
{
    //dtor
}

string Pesquisa::getTipo(){
	return tipo;
}

vector<string> Pesquisa::getParam()
{
	return param;
}

void Pesquisa::setTipo(string t){
	tipo = t;
}

void Pesquisa::setParam(vector<string> p){
	param = p;
}

void Pesquisa::importData(){
	//Codigo SQL
}
