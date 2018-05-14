#include "ListaProdutos.h"
#include "stdafx.h"

using namespace std;

//metodos para aplicar a produto
ListaProdutos::ListaProdutos(){
    //ctor
}

ListaProdutos::~ListaProdutos(){
    //dtor
}

/*vector<Produto> ListaProdutos::getList(){
	return list<Produto>();
}*/

bool ListaProdutos::importdata(string conditions) {
	if (produtos->size() == 0 || conditionalSearch == true || conditions != "") {
		//Código SQL

		conditionalSearch = (conditions == "") ? true : false;
		return false;
	}

	return true;
}

bool ListaProdutos::insertElement(){
	return false;
}

bool ListaProdutos::updateElement(){
	return false;
}

bool ListaProdutos::deleteElement(){
	return false;
}

bool ListaProdutos::exportData(){
	return false;
}

bool ListaProdutos::exportInsertData(){
	return false;
}

bool ListaProdutos::exportUpdateData(){
	return false;
}

bool ListaProdutos::exportDeleteData(){
	return false;
}
