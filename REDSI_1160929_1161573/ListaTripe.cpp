#include "ListaTripe.h"
#include "stdafx.h"

using namespace std;

ListaTripe::ListaTripe(){
    //ctor
}

ListaTripe::~ListaTripe(){
    //dtor
}

/*vector<Produto> ListaTripe::getList(){
	return *tripes;
}*/

bool ListaTripe::importdata(){
	//Código SQL
	return false;
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
	//Código SQL

	for (int i = 0; i < tripes->size(); i++) {
		tripes -> push_back(updateList->at(i));
	}

	return false;
}

bool ListaTripe::exportUpdateData(){
	//Código SQL
	return false;
}

bool ListaTripe::exportDeleteData(){
	//Código SQL
	return false;
}