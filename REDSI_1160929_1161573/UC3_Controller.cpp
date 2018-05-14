#include "stdafx.h"
#include "UC3_Controller.h"


UC3_Controller::UC3_Controller(Loja * l){
	loja = l;
	lt=&loja->getTrabalhos();
}

UC3_Controller::~UC3_Controller()
{
}

void UC3_Controller::newWork(){
	t = new TrabalhoFotografico();
}

vector<Camara> UC3_Controller::getCamaras(){
	ListaCamaras *lc = &loja->getCamaras();
	lc->importdata("");
	return lc->getList();
}

void UC3_Controller::setCamera(Camara *c){
	t->setCamara(c);
}

vector<Objetiva> UC3_Controller::getObjetivas(){
	ListaObjetivas *lo = &loja->getObjetivas();
	lo->importdata("");
	return lo->getList();
}

void UC3_Controller::setObjetivas(Objetiva *o){
	t->addObjetiva(o);
}

vector<Flash> UC3_Controller::getFlashs(){
	ListaFlash *lf = &loja->getFlashs();
	lf->importdata("");
	return lf->getList();
}

void UC3_Controller::setFlash(Flash *f){
	t->addFlash(f);
}

vector<Tripe> UC3_Controller::getTripes(){
	ListaTripe *lt = &loja->getTripes();
	lt->importdata("");
	return lt->getList();
}

void UC3_Controller::setTripe(Tripe *tp){
	t->addTripe(tp);
}

bool UC3_Controller::saveData(){
	lt->insertElement(t);
	lt->exportData();
}


