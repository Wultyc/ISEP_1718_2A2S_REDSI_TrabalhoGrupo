#ifndef LISTACAMARAS_H
#define LISTACAMARAS_H

#include <string>
#include <list>
#include "ListaProdutos.h"
#include "Produto.h"


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
};

#endif // LISTACAMARAS_H
