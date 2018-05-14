#include "ListaTripe.h"
#include "stdafx.h"

using namespace std;

ListaTripe::ListaTripe(){
    //ctor
}

ListaTripe::~ListaTripe(){
    //dtor
}

vector<Tripe> ListaTripe::getList(){
	return *tripes;
}

bool ListaTripe::importdata(string conditions){
	if (tripes->size() == 0 || conditionalSearch == true || conditions != "") {
		//C�digo SQL

		conditionalSearch = (conditions == "") ? true : false;
		return false;
	}
	
	return true;
}

bool ListaTripe::insertElement(Tripe *t){
	insertList-> push_back(*t);
	return true;
}

bool ListaTripe::updateElement(Tripe *t){
	insertList->push_back(*t);
	return true;;
}

bool ListaTripe::deleteElement(Tripe *t){
	deleteList->push_back(*t);
	return false;
}

bool ListaTripe::exportData(){
	bool insertTask, updateTask, deleteTask;
	insertTask = exportInsertData();
	updateTask = exportUpdateData();
	deleteTask = exportDeleteData();
	return (insertTask && updateTask && deleteTask);
}

bool ListaTripe::exportInsertData(){
	//C�digo SQL

	for (int i = 0; i < tripes->size(); i++) {
		tripes -> push_back(updateList->at(i));
	}

	return false;
}

bool ListaTripe::exportUpdateData(){
	//C�digo SQL
	return false;
}

bool ListaTripe::exportDeleteData(){
	//C�digo SQL
	conditionalSearch = true; //for�a que seja carregado de novo os dados
	return false;
}