#include "stdafx.h"
#include "ListaTrabalhos.h"


ListaTrabalhos::ListaTrabalhos()
{
}


ListaTrabalhos::~ListaTrabalhos()
{
}


ListaTrabalhos::ListaTrabalhos() {
	//ctor
}

ListaTrabalhos::~ListaTrabalhos() {
	//dtor
}

vector<TrabalhoFotografico> ListaTrabalhos::getList() {
	return *trabalhos;
}

bool ListaTrabalhos::importdata(string conditions) {
	//C�digo SQL
	return true;
}

bool ListaTrabalhos::insertElement(TrabalhoFotografico *o) {
	insertList->push_back(*o);
	return true;
}

bool ListaTrabalhos::updateElement(TrabalhoFotografico *o) {
	updateList->push_back(*o);
	return true;
}

bool ListaTrabalhos::deleteElement(TrabalhoFotografico *o) {
	deleteList->push_back(*o);
	return true;
}

bool ListaTrabalhos::exportData() {
	bool insertTask, updateTask, deleteTask;
	insertTask = exportInsertData();
	updateTask = exportUpdateData();
	deleteTask = exportDeleteData();
	return (insertTask && updateTask && deleteTask);
}

bool ListaTrabalhos::exportInsertData() {
	//C�digo SQL
	return false;
}

bool ListaTrabalhos::exportUpdateData() {
	//C�digo SQL
	return false;
}

bool ListaTrabalhos::exportDeleteData() {
	//C�digo SQL
	return false;
}