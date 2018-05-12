#include "ListaFlash.h"
#include "stdafx.h"

using namespace std;

ListaFlash::ListaFlash(){
    //ctor
}

ListaFlash::~ListaFlash(){
    //dtor
}

/*list<Produto> ListaFlash::getList(){
}*/

bool ListaFlash::importdata(){
	//Código SQL
	return false;
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
	//Código SQL
	return false;
}

bool ListaFlash::exportUpdateData(){
	//Código SQL

	for (int i = 0; i < flashs->size(); i++) {
		flashs->push_back(updateList->at(i));
	}

	return false;
}

bool ListaFlash::exportDeleteData(){
	//Código SQL
	return false;
}