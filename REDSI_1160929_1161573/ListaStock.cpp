#include "ListaStock.h"
#include "stdafx.h"

using namespace std;

ListaStock::ListaStock(){
    //ctor
}

ListaStock::~ListaStock(){
    //dtor
}

/*list<Produto> ListaStock::getList(){
}*/

bool ListaStock::importdata(string conditions) {
	if (stocks->size() == 0 || conditionalSearch == true || conditions != "") {
		//C�digo SQL

		conditionalSearch = (conditions == "") ? true : false;
		return false;
	}

	return true;
}

bool ListaStock::insertElement(Stock *s){
	return false;
}

bool ListaStock::updateElement(Stock *s){
	return false;
}

bool ListaStock::deleteElement(Stock *s){
	return false;
}

bool ListaStock::exportData(){
	bool insertTask, updateTask, deleteTask;
	insertTask = exportInsertData();
	updateTask = exportUpdateData();
	deleteTask = exportDeleteData();
	return (insertTask && updateTask && deleteTask);
}

bool ListaStock::exportInsertData(){
	//C�digo SQL
	return false;
}

bool ListaStock::exportUpdateData(){
	//C�digo SQL

	for (int i = 0; i < stocks->size(); i++) {
		stocks->push_back(updateList->at(i));
	}

	return false;
}

bool ListaStock::exportDeleteData(){
	//C�digo SQL
	return false;
}