#include "Stock.h"
#include "stdafx.h"

Stock::Stock(){
    //ctor
}
Stock::Stock(int i, Utilizador v, Produto p, float pc, bool n, int ur){
    //ctor
	setID(i);
	setVendedor(v);
	setProduto(p);
	setPreco(pc);
	setNovo(n);
	setUnRestantes(ur);
}
Stock::Stock(Stock &s){
    //ctor
	setID(s.getID());
	setVendedor(s.getVendedor());
	setProduto(s.getProduto());
	setPreco(s.getPreco());
	setNovo(s.isNovo());
	setUnRestantes(s.getUnRestantes());
}

Stock::~Stock(){
    //dtor
}

int Stock::getID(){
	return id;
}
Utilizador Stock::getVendedor(){
	return vendedor;
}
Produto Stock::getProduto(){
	return produto;
}
int Stock::getPreco(){
	return preco;
}
bool Stock::isNovo(){
	return novo;
}
int Stock::getUnRestantes(){
	return unRestantes;
}

void Stock::setID(int i){
	id = i;
}
void Stock::setVendedor(Utilizador v){
	vendedor = v;
}
void Stock::setProduto(Produto v){
	produto = v;
}
void Stock::setPreco(int p){
	preco = p;
}
void Stock::setNovo(bool n){
	novo = n;
}
void Stock::setUnRestantes(int ur){
	unRestantes = ur;
}

string Stock::toString(bool condensed){
	return condensed ? toStringCons() : toStringFull();
}

string Stock::toStringFull(){
	string r;

	r =  "ID: " + getID();
	r += "\nVendedor: " + getVendedor().toString(true);
	r += "\nProduto: " + getProduto().toString(true);
	r += "\nPreco: " + to_string(getPreco()) + "e";
	r += "\nEstado: " + isNovo() ? "Novo":"Usado";
	r += "\nUn. Restantes: " + to_string(getUnRestantes());

	return r;
}

string Stock::toStringCons(){
	string r;

	r = getID();
	r += "\t| " + getVendedor().getNome() + "(" + getVendedor().getID() + ")";
	r += "\t| " + getProduto().getMarca() + " " + getProduto().getModelo() + "(" + getProduto().getID() + ")";
	r += "\t| " + to_string(getPreco()) + "e";
	r += "\t| " + isNovo() ? "Novo":"Usado";
	r += "\t| " + getUnRestantes();

	return r;
}