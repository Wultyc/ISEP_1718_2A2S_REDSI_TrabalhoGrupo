#include "ListaFlash.h"
#include "stdafx.h"

using namespace std;

ListaFlash::ListaFlash(){
    //ctor
}

ListaFlash::~ListaFlash(){
    //dtor
}

vector<Flash> ListaFlash::getList(){
	return *flashs;
}

bool ListaFlash::importdata(string conditions) {
	//C�digo SQL
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
	return false;
}

bool ListaFlash::exportDeleteData(){
	//C�digo SQL
	return false;
}