#include "Tripe.h"
#include "stdafx.h"

Tripe::Tripe(){
    //ctor
}

Tripe::Tripe(int i, string m, string mo, float p){
	setID(i);
	setMarca(m);
	setModelo(mo);
	setPeso(p);
}

Tripe::Tripe(Tripe & t){
	setID(t.getID());
	setMarca(t.getMarca());
	setModelo(t.getModelo());
	setPeso(t.getPeso());
}

Tripe::~Tripe(){
    //dtor
}

int Tripe::getID(){
	return id;
}

string Tripe::getMarca(){
	return marca;
}

string Tripe::getModelo(){
	return modelo;
}

float Tripe::getPeso(){
	return peso;
}

void Tripe::setID(int i){
	id = i;
}

void Tripe::setMarca(string m){
	marca = m;
}

void Tripe::setModelo(string m){
	modelo = m;
}

void Tripe::setPeso(float p){
	peso = p;
}

string Tripe::toString(bool condensed){
	return condensed ? toStringCons() : toStringFull();
}

string Tripe::toStringFull(){
	string r;

	r = "ID: " + getID();
	r += "\nMarca: " + getMarca();
	r += "\nModelo: " + getModelo();
	r += "\nPeso: " + to_string(getPeso()) + "g";

	return r;
}

string Tripe::toStringCons(){
	string r;

	r = getID();
	r += "\t| " + getMarca();
	r += "\t| " + getModelo();
	r += "\t| " + to_string(getPeso()) + "g";

	return r;
}
