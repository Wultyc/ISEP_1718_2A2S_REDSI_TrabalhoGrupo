#include "Objetiva.h"
#include "stdafx.h"

Objetiva::Objetiva(){
    //ctor
}

Objetiva::Objetiva(int i, string m, string mo, string t, float zM, float zm, float aM, float am, float p) {
	setID(i);
	setMarca(m);
	setModelo(mo);
	setTipo(t);
	setZoomMax(zM);
	setZoomMin(zm);
	setAbrMax(aM);
	setAbrMin(am);
	setPeso(p);
}

Objetiva::Objetiva(Objetiva &Obj) {
	setID(Obj.getID());
	setMarca(Obj.getMarca());
	setModelo(Obj.getModelo());
	setTipo(Obj.getTipo());
	setZoomMax(Obj.getZoomMax());
	setZoomMin(Obj.getZoomMin());
	setAbrMax(Obj.getAbrMax());
	setAbrMin(Obj.getZoomMin());
	setPeso(Obj.getPeso());
}

Objetiva::~Objetiva(){
    //dtor
}

int Objetiva::getID(){
	return id;
}

string Objetiva::getMarca(){
	return marca;
}

string Objetiva::getModelo(){
	return modelo;
}

string Objetiva::getTipo(){
	return tipo;
}

float Objetiva::getZoomMax(){
	return zoom_max;
}

float Objetiva::getZoomMin(){
	return zoom_min;
}

float Objetiva::getAbrMax(){
	return abr_max;
}

float Objetiva::getAbrMin(){
	return abr_min;
}

float Objetiva::getPeso(){
	return peso;
}

void Objetiva::setID(int i){
	id = i;
}

void Objetiva::setMarca(string m) {
	marca = m;
}

void Objetiva::setModelo(string m) {
	modelo = m;
}

void Objetiva::setTipo(string t){
	tipo = t;
}

void Objetiva::setZoomMax(float zM){
	zoom_max = zM;
}

void Objetiva::setZoomMin(float zm){
	zoom_min = zm;
}

void Objetiva::setAbrMax(float aM){
	abr_max = aM;
}

void Objetiva::setAbrMin(float am){
	abr_min = am;
}

void Objetiva::setPeso(float p){
	peso = p;
}

string Objetiva::toString(bool condensed) {
	return condensed ? toStringCons() : toStringFull();
}

string Objetiva::toStringFull() {
	string r;

	r = "ID: " + getID();
	r += "\nMarca: " + getMarca();
	r += "\nModelo: " + getModelo();
	r += "\nTipo: " + getTipo();
	r += "\nZoom Max: " + getZoomMax();
	r += "\nZoom Min: " + getZoomMin();
	r += "\nAbr Max: " + getAbrMax();
	r += "\nAbr Min: " + getAbrMin();
	r += "\nPeso: " + getPeso() + "g";

	return r;
}

string Objetiva::toStringCons() {
	string r;

	r = getID();
	r += "\t| " + getMarca();
	r += "\t| " + getModelo();
	r += "\t| " + getTipo();
	r += "\t| " + getZoomMax();
	r += "\t| " + getZoomMin();
	r += "\t| " + getAbrMax();
	r += "\t| " + getAbrMin();
	r += "\t| " + getPeso() + "g";

	return r;
}