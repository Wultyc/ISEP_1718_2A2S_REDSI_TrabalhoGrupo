#include "ListaObjetivas.h"
#include "stdafx.h"

using namespace std;

ListaObjetivas::ListaObjetivas(){
    //ctor
}

ListaObjetivas::~ListaObjetivas(){
    //dtor
}

list<Objetiva> ListaObjetivas::getList(){
	return *objetivas;
}

bool ListaObjetivas::importdata(string conditions) {
	//Código SQL
	return true;
}

bool ListaObjetivas::insertElement(Objetiva *o){
	insertList->push_back(*o);
	return true;
}

bool ListaObjetivas::updateElement(Objetiva *o){
	updateList->push_back(*o);
	return true;
}

bool ListaObjetivas::deleteElement(Objetiva *o){
	deleteList->push_back(*o);
	return true;
}

bool ListaObjetivas::exportData(){
	bool insertTask, updateTask, deleteTask;
	insertTask = exportInsertData();
	updateTask = exportUpdateData();
	deleteTask = exportDeleteData();
	return (insertTask && updateTask && deleteTask);
}

bool ListaObjetivas::exportInsertData(){
	//Código SQL
	return false;
}

bool ListaObjetivas::exportUpdateData(){
	//Código SQL
	return false;
}

bool ListaObjetivas::exportDeleteData(){
	//Código SQL
	return false;
}