#ifndef LISTACAMARAS_H
#define LISTACAMARAS_H

#include <string>
#include <list>
#include <vector>
#include "ListaProdutos.h"
#include "Produto.h"
#include "Camara.h"


class ListaCamaras : public ListaProdutos
{
    public:
        ListaCamaras();
        virtual ~ListaCamaras();
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
		list<Camara> tripe;
		vector<int> cd;
};

#endif // LISTACAMARAS_H
