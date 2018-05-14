#pragma once

#include <string>
#include <vector>
#include "Produto.h"

using namespace std;

class Pesquisa
{
    public:
        Pesquisa();
        virtual ~Pesquisa();

		//get
		string getTipo();
		vector<string> getParam();

		//set
		void setTipo(string t);
		void setParam(vector<string> p);

		void importData();

    private:
		string tipo;
		vector<string> param;
};

