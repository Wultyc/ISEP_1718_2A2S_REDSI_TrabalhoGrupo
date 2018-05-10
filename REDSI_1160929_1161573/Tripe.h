#ifndef TRIPE_H
#define TRIPE_H

#include <string>
#include "Produto.h"

using namespace std;

class Tripe : public Produto
{
    public:
		Tripe();
		Tripe(int i, string m, string mo, float p);
		Tripe(Tripe &t);
        virtual ~Tripe();

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

		bool operator == (Tripe *t) const;

    private:
		int id;
		string marca;
		string modelo;
		float peso;
};

#endif // TRIPE_H
