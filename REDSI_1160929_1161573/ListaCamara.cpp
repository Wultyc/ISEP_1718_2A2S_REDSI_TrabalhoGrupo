#include "ListaCamara.h"
#include "stdafx.h"

using namespace std;

ListaCamaras::ListaCamaras(){
    //ctor
}

ListaCamaras::~ListaCamaras(){
    //dtor
}

/*list<Produto> ListaCamaras::getList(){
}*/

bool ListaCamaras::importdata(){
	//Código SQL
	return true;
}

bool ListaCamaras::insertElement(Camara *c){
	insertList->push_back(*c);
	return true;
}

bool ListaCamaras::updateElement(Camara *c){
	insertList->push_back(*c);
	return true;
}

bool ListaCamaras::deleteElement(Camara *c){
	deleteList->push_back(*t);
	return false;
}

bool ListaCamaras::exportData(){
	bool insertTask, updateTask, deleteTask;
	insertTask = exportInsertData();
	updateTask = exportUpdateData();
	deleteTask = exportDeleteData();
	return (insertTask && updateTask && deleteTask);
}

bool ListaCamaras::exportInsertData(){
	//Código SQL
	return false;
}

bool ListaCamaras::exportUpdateData(){
	//Código SQL

	for (int i = 0; i < camaras->size(); i++) {
		camaras->push_back(updateList->at(i));
	}
	return false;
}

bool ListaCamaras::exportDeleteData(){
	//Código SQL
	return false;
}