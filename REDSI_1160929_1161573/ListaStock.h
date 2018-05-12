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
		//list<Produto> getList(); //tem de se mudar o tipo de dados
		bool importdata(string conditions);
		bool insertElement(Stock *s);
		bool updateElement(Stock *s);
		bool deleteElement(Stock *s);
		bool exportData();
		bool exportInsertData();
		bool exportUpdateData();
		bool exportDeleteData();
    private:
		list<Stock> *stocks;
		vector<Stock> *insertList;
		vector<Stock> *updateList;
		vector<Stock> *deleteList;
		bool conditionalSearch;
};

#endif // LISTASTOCK_H
