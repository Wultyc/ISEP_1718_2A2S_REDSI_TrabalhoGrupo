#pragma once

#include <string>
#include <list>

#include "Pesquisa.h"
#include "Login.h"
#include "ListaProdutos.h"
#include "ListaCamara.h"
#include "ListaObjetivas.h"
#include "ListaTripe.h"
#include "ListaFlash.h"
#include "ListaStock.h"
#include "ListaTrabalhos.h"

using namespace std;

class Loja
{
    public:
        Loja();
        virtual ~Loja();

		//get
		Pesquisa getPesquisa();
		Login getLogin_ativo();
		ListaCamaras getCamaras();
		ListaObjetivas getObjetivas();
		ListaFlash getFlashs();
		ListaTripe getTripes();
		ListaStock getStocks();
		ListaTrabalhos getTrabalhos();

		//set
		void setPesquisa(Pesquisa *p);
		void setLogin_ativo(Login *la);
		void setCamaras(ListaCamaras *lc);
		void setObjetivas(ListaObjetivas *lo);
		void setFlashs(ListaFlash *lf);
		void setTripes(ListaTripe *lt);
		void setStocks(ListaStock *ls);
		void setTrabalhos(ListaTrabalhos *ls);

		Login newLogin();
		Pesquisa newSearch();

    private:
		//Pesquisa
		Pesquisa *pesquisa;

		//Login Ativo
		Login *login_ativo;

		//Listas
		ListaCamaras *camaras;
		ListaObjetivas *objetivas;
		ListaFlash *flashs;
		ListaTripe *tripes;
		ListaStock *stocks;
		ListaTrabalhos *trabalhos;
};

