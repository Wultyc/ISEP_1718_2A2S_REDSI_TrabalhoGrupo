#include "stdafx.h"
#include "UC4_View.h"


UC4_View::UC4_View(Loja *l){
	loja = l;
	c = new UC4_Controller();
}


UC4_View::~UC4_View(){
}

void UC4_View::start(){
	int opt;
	vector<TrabalhoFotografico> *trabalhos = &c->getWorks();
	TrabalhoFotografico *t;
	int id;
	string camInfo, date;
	Camara *cam;
	//Lista de Trabalhos
	cout << "Selecione um Trabalho." << endl;

	for (auto it = trabalhos->begin(); it != trabalhos->end(); ) {
		id = it->getID();
		cam = &it->getcamara();
		camInfo = cam->toString(true);
		date = it->getDate();
		cout << id << "\t" << camInfo << "\t" << date << "\t";
	}
	cout << "Insira o ID: ";
	cin >> opt;
	t = trabalhos.at(opt);

	id = t->getID();
	cam = &t->getcamara();
	camInfo = cam->toString(true);
	date = t->getDate();
	cout << id << "\t" << camInfo << "\t" << date << "\t";
}

