#include "Flash.h"
#include "stdafx.h"

Flash::Flash(){
    //ctor
}

Flash::Flash(int i, string m, string mo, float p){
    //ctor
	setID(i);
	setMarca(m);
	setModelo(mo);
	setPeso(p);
}

Flash::Flash(Flash &f){
    //ctor
	setID(f.getID());
	setMarca(f.getMarca());
	setModelo(f.getModelo());
	setPeso(f.getPeso());
}

Flash::~Flash(){
    //dtor
}

int Flash::getID(){
	return id;
}

string Flash::getMarca(){
	return marca;
}

string Flash::getModelo(){
	return modelo;
}

float Flash::getPeso(){
	return peso;
}

void Flash::setID(int i){
	id = i;
}

void Flash::setMarca(string m){
	marca = m;
}

void Flash::setModelo(string m){
	modelo = m;
}
void Flash::setPeso(float p){
	peso = p;
}

string Flash::toString(bool condensed){
	return condensed ? toStringCons() : toStringFull();
}

string Flash::toStringFull(){
	string r;

	r =  "ID: " + getID();
	r += "\nMarca: " + getMarca();
	r += "\nModelo: " + getModelo();
	r += "\nPeso: " + to_string(getPeso()) + "g";

	return r;
}

string Flash::toStringCons(){
	string r;

	r = getID();
	r += "\t| " + getMarca();
	r += "\t| " + getModelo();
	r += "\t| " + to_string(getPeso()) + "g";

	return r;
}

bool Flash::operator==(Flash *f) const{
	return (id == f->getID()) ? true : false;
}
