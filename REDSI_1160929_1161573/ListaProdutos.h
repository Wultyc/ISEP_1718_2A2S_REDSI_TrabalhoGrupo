#ifndef LISTAPRODUTOS_H
#define LISTAPRODUTOS_H

#include <string>
#include <list>
#include "Produto.h"

class ListaProdutos
{
    public:
        ListaProdutos();
        virtual ~ListaProdutos();

		virtual list<Produto> getList(); //tem de se mudar o tipo de dados
		virtual bool importdata();
		virtual bool insertElement();
		virtual bool updateElement();
		virtual bool deleteElement();
		virtual bool exportData();
		virtual bool exportInsertData();
		virtual bool exportUpdateData();
		virtual bool exportDeleteData();

    private:
};

#endif // LISTAPRODUTOS_H
