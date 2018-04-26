#ifndef TRIPE_H
#define TRIPE_H

#include <string>
#include "Produto.h"

using namespace std;

class Tripe : public Produto
{
    public:
        Tripe();
        virtual ~Tripe();

		//get
		int getID();
		string getMarca();
		string getModelo();
		float getPeso();

		//set
		void setID(int i);
		void setMarca(string m);
		void setPeso(float p);

    private:
		int id;
		string marca;
		string modelo;
		float peso;
};

#endif // TRIPE_H
