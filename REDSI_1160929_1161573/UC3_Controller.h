#pragma once

#include <string>
#include <vector>
#include "Loja.h"
#include "TrabalhoFotografico.h"
#include "ListaTrabalhos.h"
#include "ListaCamara.h"
#include "ListaObjetivas.h"
#include "ListaFlash.h"
#include "ListaTripe.h"

class UC3_Controller
{
public:
	UC3_Controller(Loja *l);
	~UC3_Controller();

	void newWork();
	vector<Camara> getCamaras();
	void setCamera(Camara *c);
	vector<Objetiva> getObjetivas();
	void setObjetivas(Objetiva *o);
	vector<Flash> getFlashs();
	void setFlash(Flash *f);
	vector<Tripe> getTripes();
	void setTripe(Tripe *t);
	bool saveData();

private:
	Loja * loja;
	ListaTrabalhos *lt;
	TrabalhoFotografico *t;
};

