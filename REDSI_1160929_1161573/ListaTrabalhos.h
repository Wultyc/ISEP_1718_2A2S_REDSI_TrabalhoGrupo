#pragma once
#include "TrabalhoFotografico.h"
class ListaTrabalhos
{
public:
	ListaTrabalhos();
	~ListaTrabalhos();
	vector<TrabalhoFotografico> getList(); //tem de se mudar o tipo de dados
	bool importdata(string conditions);
	bool insertElement(TrabalhoFotografico *t);
	bool updateElement(TrabalhoFotografico *t);
	bool deleteElement(TrabalhoFotografico *t);
	bool exportData();
	bool exportInsertData();
	bool exportUpdateData();
	bool exportDeleteData();
private:
	vector<TrabalhoFotografico> *trabalhos;
	vector<TrabalhoFotografico> *insertList;
	vector<TrabalhoFotografico> *updateList;
	vector<TrabalhoFotografico> *deleteList;
};

