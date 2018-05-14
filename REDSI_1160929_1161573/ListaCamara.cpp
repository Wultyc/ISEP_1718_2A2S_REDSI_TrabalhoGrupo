#include "ListaCamara.h"
#include "stdafx.h"

using namespace std;

ListaCamaras::ListaCamaras(){
    //ctor
}

ListaCamaras::~ListaCamaras(){
    //dtor
}

list<Camara> ListaCamaras::getList(){
	return *camaras;
}

bool ListaCamaras::importdata(string conditions) {
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
	deleteList->push_back(*c);
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
	//C�digo SQL
	return false;
}

bool ListaCamaras::exportUpdateData(){
	//C�digo SQL

	for (int i = 0; i < camaras->size(); i++) {
		camaras->push_back(updateList->at(i));
	}
	return false;
}

bool ListaCamaras::exportDeleteData(){
	//C�digo SQL
	return false;
}