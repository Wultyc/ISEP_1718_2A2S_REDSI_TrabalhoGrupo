#include "stdafx.h"
#include "UC2_Controller.h"


UC2_Controller::UC2_Controller(Loja * l){
	loja = l;
}

UC2_Controller::~UC2_Controller(){
}

void UC2_Controller::newSearch(){
	s = &loja->newSearch();
}

void UC2_Controller::setTipo(string t){
	s->setTipo(t);
}

void UC2_Controller::setParam(vector<string> p){
	s->setParam(p);
}

void UC2_Controller::makeSearch(){
	s->importData();
}

