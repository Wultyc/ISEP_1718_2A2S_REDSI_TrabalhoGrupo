#ifndef LISTAOBJETIVAS_H
#define LISTAOBJETIVAS_H

#include <string>
#include <list>
#include <vector>
#include "ListaProdutos.h"
#include "Produto.h"
#include "Objetiva.h"


class ListaObjetivas : public ListaProdutos
{
    public:
        ListaObjetivas();
		virtual ~ListaObjetivas();
		list<Objetiva> getList(); //tem de se mudar o tipo de dados
		bool importdata(string conditions);
		bool insertElement(Objetiva *o);
		bool updateElement(Objetiva *o);
		bool deleteElement(Objetiva *o);
		bool exportData();
		bool exportInsertData();
		bool exportUpdateData();
		bool exportDeleteData();
    private:
		list<Objetiva> *objetivas;
		vector<Objetiva> *insertList;
		vector<Objetiva> *updateList;
		vector<Objetiva> *deleteList;
		
};

#endif // LISTAOBJETIVAS_H
