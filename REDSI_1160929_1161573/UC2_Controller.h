#pragma once

#include <string>
#include <vector>
#include "Loja.h"
#include "Pesquisa.h"


using namespace std;

class UC2_Controller{
public:
	UC2_Controller(Loja *l);
	~UC2_Controller();

	void newSearch();
	void setTipo(string t);
	void setParam(vector<string> p);
	void makeSearch();

private:
	Loja * loja;
	Pesquisa *s;
};

