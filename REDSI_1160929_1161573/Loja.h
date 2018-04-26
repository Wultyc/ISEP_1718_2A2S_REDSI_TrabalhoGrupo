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

    private:
		//Pesquisa
		Pesquisa pesquisa;

		//Login Ativo
		Login login_ativo;

		//Listas
		ListaCamaras camaras;
		ListaObjetivas objetivas;
		ListaFlash flashs;
		ListaTripe tripes;
		ListaStock stocks;
};

#endif // LOJA_H
