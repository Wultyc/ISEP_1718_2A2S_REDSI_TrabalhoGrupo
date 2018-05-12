#include "TrabalhoFotografico.h"
#include "stdafx.h"

using namespace std;

TrabalhoFotografico::TrabalhoFotografico(){
    //ctor
}

TrabalhoFotografico::~TrabalhoFotografico() {
    //dtor
}

int TrabalhoFotografico::getID() {
	return id;
}

Camara TrabalhoFotografico::getcamara()
{
	return camara;
}

Utilizador TrabalhoFotografico::getUtilizador()
{
	return *utilizador;
}

list<Objetiva> TrabalhoFotografico::getobjetivas()
{
	return objetivas;
}

list<Flash> TrabalhoFotografico::getflashs()
{
	return flashs;
}

list<Tripe> TrabalhoFotografico::gettripes()
{
	return tripes;
}

string TrabalhoFotografico::getDate()
{
	return to_string(year) + "-" + to_string(month) + "-" + to_string(day);
}

void TrabalhoFotografico::setID(int i){
	id = i;
}

void TrabalhoFotografico::setUtilizador(Utilizador *u){
	utilizador = u;
}

void TrabalhoFotografico::setCamara(Camara *cam){
	camara = cam;
}

void TrabalhoFotografico::addObjetiva(Objetiva *obj){
	objetivas->push_back(*obj);
}

void TrabalhoFotografico::addFlash(Flash *flash){
	flashs->push_back(*flash);
}

void TrabalhoFotografico::addTripe(Tripe *tripe){
	tripes->push_back(*tripe);
}

void TrabalhoFotografico::setDate(int d, int m, int y){
	day = d;
	month = m;
	year = y;
}

void TrabalhoFotografico::delObjetiva(Objetiva *obj){
	for (auto it = objetivas->begin(); it != objetivas->end(); ) {
		if (*it == obj) {
			it = objetivas->erase(it);
		}
		else {
			++it;
		}
	}
}

void TrabalhoFotografico::delFlash(Flash *flash){
	for (auto it = flashs->begin(); it != flashs->end(); ) {
		if (*it == flash) {
			it = flashs->erase(it);
		}
		else {
			++it;
		}
	}
}

void TrabalhoFotografico::delTripe(Tripe *tripe){
	for (auto it = tripes->begin(); it != tripes->end(); ) {
		if (*it == tripe) {
			it = tripes->erase(it);
		}
		else {
			++it;
		}
	}
}

bool TrabalhoFotografico::operator==(TrabalhoFotografico *t) const{
	return (id == t -> getID()) ? true : false;
}