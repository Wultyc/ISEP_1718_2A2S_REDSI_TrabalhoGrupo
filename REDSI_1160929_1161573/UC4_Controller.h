#pragma once

#include <string>
#include <vector>
#include "Loja.h"
#include "TrabalhoFotografico.h"
#include "ListaTrabalhos.h"

class UC4_Controller
{
public:
	UC4_Controller(Loja *l);
	~UC4_Controller();
	vector<TrabalhoFotografico> getWorks();
	TrabalhoFotografico getWork(int id);

private:
	Loja * loja;
	ListaTrabalhos *lt;
	vector<TrabalhoFotografico> *trabalhos;
	TrabalhoFotografico *t;
};
