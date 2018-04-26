#ifndef LISTAFLASH_H
#define LISTAFLASH_H

#include <string>
#include <list>
#include <vector>
#include "ListaProdutos.h"
#include "Produto.h"
#include "Flash.h"


class ListaFlash : public ListaProdutos
{
    public:
        ListaFlash();
        virtual ~ListaFlash();
		list<Produto> getList(); //tem de se mudar o tipo de dados
		bool importdata();
		bool insertElement();
		bool updateElement();
		bool deleteElement();
		bool exportData();
		bool exportInsertData();
		bool exportUpdateData();
		bool exportDeleteData();
    private:
		list<Flash> tripe;
		vector<int> cd;
};

#endif // LISTAFLASH_H
