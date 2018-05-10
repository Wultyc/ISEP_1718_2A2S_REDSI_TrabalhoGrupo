#ifndef LISTASTOCK_H
#define LISTASTOCK_H

#include <string>
#include <list>
#include <vector>
#include "ListaProdutos.h"
#include "Produto.h"
#include "Stock.h"


class ListaStock : public ListaProdutos
{
    public:
        ListaStock();
        virtual ~ListaStock();
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
		list<Stock> tripe;
		list<Stock> cd;
};

#endif // LISTASTOCK_H
