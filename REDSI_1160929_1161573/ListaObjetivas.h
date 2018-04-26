#ifndef LISTAOBJETIVAS_H
#define LISTAOBJETIVAS_H

#include <string>
#include <list>
#include "ListaProdutos.h"
#include "Produto.h"


class ListaObjetivas : public ListaProdutos
{
    public:
        ListaObjetivas();
		virtual ~ListaObjetivas();
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

#endif // LISTAOBJETIVAS_H
