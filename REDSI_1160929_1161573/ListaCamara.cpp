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
	if (camaras->size() == 0 || conditionalSearch == true || conditions != "") {
		//Código SQL

		conditionalSearch = (conditions == "") ? true : false;
		return false;
	}

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
	conditionalSearch = true; //força que seja carregado de novo os dados
	return false;
}