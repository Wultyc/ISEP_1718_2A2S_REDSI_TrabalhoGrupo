#pragma once

#include <string>
#include "Produto.h"

using namespace std;

class Flash : public Produto
{
    public:
        Flash();
		Flash(int i, string m, string mo, float p);
        virtual ~Flash();

		//get
		int getID();
		string getMarca();
		string getModelo();
		float getPeso();

		//set
		void setID(int i);
		void setMarca(string m);
		void setModelo(string m);
		void setPeso(float p);
		
		string toString(bool condensed = false);
		string toStringFull();
		string toStringCons();

		bool operator == (Flash *f) const;

    private:
		int id;
		string marca;
		string modelo;
		float peso;
};