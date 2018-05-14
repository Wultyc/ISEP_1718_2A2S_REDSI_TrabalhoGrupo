#pragma once

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
		vector<Stock> getList(); //tem de se mudar o tipo de dados
		bool importdata(string conditions);
		bool insertElement(Stock *s);
		bool updateElement(Stock *s);
		bool deleteElement(Stock *s);
		bool exportData();
		bool exportInsertData();
		bool exportUpdateData();
		bool exportDeleteData();
    private:
		vector<Stock> *stocks;
		vector<Stock> *insertList;
		vector<Stock> *updateList;
		vector<Stock> *deleteList;
};