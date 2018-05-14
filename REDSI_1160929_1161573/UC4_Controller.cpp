#include "stdafx.h"
#include "UC4_Controller.h"


UC4_Controller::UC4_Controller(Loja *l){
	loja = l;
}


UC4_Controller::~UC4_Controller(){
}

vector<TrabalhoFotografico> UC4_Controller::getWorks(){
	lt = &loja->getTrabalhos();
	lt->importdata("");
	trabalhos = &lt->getList();
	return *trabalhos;
}

TrabalhoFotografico UC4_Controller::getWork(int id){
	return trabalhos->at(id);
}
