#ifndef LISTATRIPE_H
#define LISTATRIPE_H

#include <string>
#include <list>
#include <vector>
#include "ListaProdutos.h"
#include "Produto.h"
#include "Tripe.h"


class ListaTripe : public ListaProdutos
{
    public:
        ListaTripe();
        virtual ~ListaTripe();
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
		list<Tripe> tripe;
		list<Tripe> cd;

};

#endif // LISTATRIPE_H
