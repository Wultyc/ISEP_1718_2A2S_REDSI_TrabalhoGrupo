#ifndef LISTAFLASH_H
#define LISTAFLASH_H

#include <string>
#include <list>
#include "ListaProdutos.h"
#include "Produto.h"


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
};

#endif // LISTAFLASH_H
