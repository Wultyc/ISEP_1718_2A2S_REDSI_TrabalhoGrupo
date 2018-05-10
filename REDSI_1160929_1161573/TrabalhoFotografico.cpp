#include "TrabalhoFotografico.h"
#include "stdafx.h"

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

void TrabalhoFotografico::setCamara(Camara cam){
	camara = cam;
}

void TrabalhoFotografico::addObjetiva(Objetiva obj){
	objetivas.push_back(obj);
}

void TrabalhoFotografico::addFlash(Flash flash){
	flashs.push_back(flash);
}

void TrabalhoFotografico::addTripe(Tripe tripe){
	tripes.push_back(tripe);
}

void TrabalhoFotografico::setDate(int d, int m, int y){
	day = d;
	month = m;
	year = y;
}

void TrabalhoFotografico::delObjetiva(Objetiva obj){
	objetivas.remove(obj);
}

void TrabalhoFotografico::delFlash(Flash flash){
	flashs.remove(flash);
}

void TrabalhoFotografico::delTripe(Tripe tripe){
	tripes.remove(tripe);
}

bool TrabalhoFotografico::operator==(TrabalhoFotografico *t) const{
	return (id == t -> getID()) ? true : false;
}
