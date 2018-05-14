#pragma once

#include <string>
#include <vector>
#include "ListaProdutos.h"
#include "Produto.h"
#include "Tripe.h"


class ListaTripe : public ListaProdutos
{
    public:
        ListaTripe();
        virtual ~ListaTripe();
		vector<Tripe> getList();
		bool importdata(string conditions);
		bool insertElement(Tripe *t);
		bool updateElement(Tripe *t);
		bool deleteElement(Tripe *t);
		bool exportData();
		bool exportInsertData();
		bool exportUpdateData();
		bool exportDeleteData();

    private:
		vector<Tripe> *tripes;
		vector<Tripe> *insertList;
		vector<Tripe> *updateList;
		vector<Tripe> *deleteList;

};

