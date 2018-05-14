#ifndef LOJA_H
#define LOJA_H

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

		//set
		void getPesquisa(Pesquisa p);
		void getLogin_ativo(Login la);
		void getCamaras(ListaCamaras lc);
		void getObjetivas(ListaObjetivas lo);
		void getFlashs(ListaFlash lf);
		void getTripes(ListaTripe lt);
		void getStocks(ListaStock ls);

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
};

#endif // LOJA_H
