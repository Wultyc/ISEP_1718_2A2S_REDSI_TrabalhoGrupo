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
	//C�digo SQL
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
	return true;
}

bool ListaTripe::exportUpdateData(){
	//C�digo SQL
	return true;
}

bool ListaTripe::exportDeleteData(){
	//C�digo SQL
	return true;
}