#include "Loja.h"
#include "stdafx.h"

using namespace std;

Loja::Loja(){
    //ctor
}

Loja::~Loja(){
    //dtor
}

Pesquisa Loja::getPesquisa(){
	return *pesquisa;
}

Login Loja::getLogin_ativo()
{
	return *login_ativo;
}

ListaCamaras Loja::getCamaras(){
	return *camaras;
}

ListaObjetivas Loja::getObjetivas(){
	return *objetivas;
}

ListaFlash Loja::getFlashs(){
	return *flashs;
}

ListaTripe Loja::getTripes(){
	return *tripes;
}

ListaStock Loja::getStocks(){
	return *stocks;
}

ListaTrabalhos Loja::getTrabalhos(){
	return *trabalhos;
}

void Loja::setPesquisa(Pesquisa *p){
	pesquisa = p;
}

void Loja::setLogin_ativo(Login *la){
	login_ativo = la;
}

void Loja::setCamaras(ListaCamaras *lc){
	camaras = lc;
}

void Loja::setObjetivas(ListaObjetivas *lo){
	objetivas = lo;
}

void Loja::setFlashs(ListaFlash *lf){
	flashs = lf;
}

void Loja::setTripes(ListaTripe *lt){
	tripes = lt;
}

void Loja::setStocks(ListaStock *ls){
	stocks = ls;
}

Login Loja::newLogin(){
	login_ativo = new Login();
	return *login_ativo;
}

Pesquisa Loja::newSearch(){
	pesquisa = new Pesquisa();
	return *pesquisa;
}
