#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Loja.h"
#include "UC3_Controller.h"
#include "TrabalhoFotografico.h"
#include "ListaTrabalhos.h"
#include "ListaCamara.h"
#include "ListaObjetivas.h"
#include "ListaFlash.h"
#include "ListaTripe.h"
class UC3_View
{
public:
	UC3_View(Loja *l);
	~UC3_View();
	void start();
private:
	Loja *loja;
	UC3_Controller *c;
};

