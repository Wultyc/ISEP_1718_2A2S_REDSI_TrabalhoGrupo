#ifndef LISTAPRODUTOS_H
#define LISTAPRODUTOS_H

#include <string>
#include <vector>
#include "Produto.h"

class ListaProdutos
{
    public:
        ListaProdutos();
        virtual ~ListaProdutos();

		//virtual vector<Produto> getList(); //tem de se mudar o tipo de dados
		virtual bool importdata(string conditions);
		virtual bool insertElement();
		virtual bool updateElement();
		virtual bool deleteElement();
		virtual bool exportData();
		virtual bool exportInsertData();
		virtual bool exportUpdateData();
		virtual bool exportDeleteData();

    private:
		bool conditionalSearch;
		vector<Produto> *produtos;
		vector<Produto> *insertList;
		vector<Produto> *updateList;
		vector<Produto> *deleteList;
};

#endif // LISTAPRODUTOS_H
