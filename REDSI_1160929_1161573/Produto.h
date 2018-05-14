#pragma once

#include <string>

using namespace std;

class Produto
{
    public:
        Produto();
        virtual ~Produto();

		virtual string toString(bool n);
		virtual int getID();
		virtual string getMarca();
		virtual string getModelo();

		virtual bool operator == (Produto *p) const;


    private:
		int id;
		string marca;
		string modelo;
		
};
