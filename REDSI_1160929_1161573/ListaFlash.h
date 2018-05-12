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
		//list<Produto> getList(); //tem de se mudar o tipo de dados
		bool importdata();
		bool insertElement(Flash *f);
		bool updateElement(Flash *f);
		bool deleteElement(Flash *f);
		bool exportData();
		bool exportInsertData();
		bool exportUpdateData();
		bool exportDeleteData();
    private:
		list<Flash> *flashs;
		vector<Flash> *insertList;
		vector<Flash> *updateList;
		vector<Flash> *deleteList;
};

#endif // LISTAFLASH_H
