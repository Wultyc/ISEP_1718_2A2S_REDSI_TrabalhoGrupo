#pragma once

#include <string>
#include <iostream>
#include "Loja.h"
#include "UC4_Controller.h"
#include "ListaTrabalhos.h"
#include "TrabalhoFotografico.h"
class UC4_View
{
public:
	UC4_View(Loja *l);
	~UC4_View();
	void start();

private:
	Loja * loja;
	UC4_Controller *c;
};
