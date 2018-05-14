#include "ListaFlash.h"
#include "stdafx.h"

using namespace std;

ListaFlash::ListaFlash(){
    //ctor
}

ListaFlash::~ListaFlash(){
    //dtor
}

list<Flash> ListaFlash::getList(){
	return *flashs;
}

bool ListaFlash::importdata(string conditions) {
	if (flashs->size() == 0 || conditionalSearch == true || conditions != "") {
		//C�digo SQL

		conditionalSearch = (conditions == "") ? true : false;
		return false;
	}

	return true;
}

bool ListaFlash::insertElement(Flash *f){
	insertList->push_back(*f);
	return true;
}

bool ListaFlash::updateElement(Flash *f){
	insertList->push_back(*f);
	return true;
}

bool ListaFlash::deleteElement(Flash *f){
	deleteList->push_back(*f);
	return true;
}

bool ListaFlash::exportData(){
	bool insertTask, updateTask, deleteTask;
	insertTask = exportInsertData();
	updateTask = exportUpdateData();
	deleteTask = exportDeleteData();
	return (insertTask && updateTask && deleteTask);
}

bool ListaFlash::exportInsertData(){
	//C�digo SQL
	return false;
}

bool ListaFlash::exportUpdateData(){
	//C�digo SQL

	for (int i = 0; i < flashs->size(); i++) {
		flashs->push_back(updateList->at(i));
	}

	return false;
}

bool ListaFlash::exportDeleteData(){
	//C�digo SQL
	conditionalSearch = true; //for�a que seja carregado de novo os dados
	return false;
}