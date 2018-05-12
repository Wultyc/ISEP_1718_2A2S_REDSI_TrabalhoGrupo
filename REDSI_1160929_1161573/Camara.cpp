#include "Camara.h"
#include "stdafx.h"

using namespace std;

Camara::Camara(){
    //ctor
}

Camara::Camara(int i, string m, string mo, string s, float p) {
	//ctor
	setID(i);
	setMarca(m);
	setModelo(mo);
	setSensor(s);
	setPeso(p);
}

Camara::Camara(Camara &C1) {
	//ctor
	setID(C1.getID());
	setMarca(C1.getMarca());
	setModelo(C1.getModelo());
	setSensor(C1.getSensor());
	setPeso(C1.getPeso());
}

Camara::~Camara(){
    //dtor
}

int Camara::getID(){
	return id;
}

string Camara::getMarca(){
	return marca;
}

string Camara::getModelo(){
	return modelo;
}

string Camara::getSensor(){
	return sensor;
}

float Camara::getPeso(){
	return peso;
}

void Camara::setID(int i){
	id = i;
}

void Camara::setMarca(string m) {
	marca = m;
}

void Camara::setModelo(string m) {
	modelo = m;
}

void Camara::setSensor(string s){
	sensor = s;
}

void Camara::setPeso(float p){
	peso = p;
}

string Camara::toString(bool condensed){
	return condensed ? toStringCons() : toStringFull();
}

string Camara::toStringFull(){
	string r;

	r =  "ID: " + getID();
	r += "\nMarca: " + getMarca();
	r += "\nModelo: " + getModelo();
	r += "\nSensor: " + getSensor();
	r += "\nPeso: " + to_string(getPeso()) + "g";

	return r;
}

string Camara::toStringCons(){
	string r;

	r = getID();
	r += "\t| " + getMarca();
	r += "\t| " + getModelo();
	r += "\t| " + getSensor();
	r += "\t| " + to_string(getPeso()) + "g";

	return r;
}

bool Camara::operator==(Camara *c) const{
	return (id == c->getID()) ? true : false;
}

