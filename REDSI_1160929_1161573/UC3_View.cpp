#include "stdafx.h"
#include "UC3_View.h"


UC3_View::UC3_View(Loja *l){
	loja = l;
	c = new UC3_Controller(loja);
}


UC3_View::~UC3_View(){
}

void UC3_View::start(){
	int opt;

	c->newWork();
	
	//Camara
	vector<Camara> *lc = &c->getCamaras();
	cout << "Selecione uma camara." << endl;

	for (auto it = lc->begin(); it != lc->end(); ) {
		it->toString(true);
	}
	cout << "Insira o ID: ";
	cin >> opt;
	c->setCamera(&lc->at(opt));
	opt = 0;

	//Objetivas
	vector<Objetiva> *lo = &c->getObjetivas();
	cout << "Selecione as objetiva. envie -1 quando terminar" << endl; 

	for (auto it = lo->begin(); it != lo->end(); ) {
		it->toString(true);
	}
	
	while (opt != -1) {
		cout << "Insira o ID: ";
		cin >> opt;
		c->setObjetivas(&lo->at(opt));
	}
	opt = 0;

	//Tripe
	vector<Tripe> *lt = &c->getTripes();
	cout << "Selecione os tripes. envie -1 quando terminar" << endl;

	for (auto it = lt->begin(); it != lt->end(); ) {
		it->toString(true);
	}

	while (opt != -1) {
		cout << "Insira o ID: ";
		cin >> opt;
		c->setTripe(&lt->at(opt));
	}
	opt = 0;

	//Flash
	vector<Flash> *lf = &c->getFlashs();
	cout << "Selecione os flashs. envie -1 quando terminar" << endl;

	for (auto it = lf->begin(); it != lf->end(); ) {
		it->toString(true);
	}

	while (opt != -1) {
		cout << "Insira o ID: ";
		cin >> opt;
		c->setFlash(&lf->at(opt));
	}
	opt = 0;

	c->saveData();
}
