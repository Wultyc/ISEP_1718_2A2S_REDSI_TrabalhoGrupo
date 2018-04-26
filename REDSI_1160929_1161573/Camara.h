#ifndef CAMARA_H
#define CAMARA_H

#include <string>
#include "Produto.h"

using namespace std;

class Camara : public Produto
{
    public:
        Camara();
        virtual ~Camara();

		//get
		int getID();
		string getMarca();
		string getModelo();
		string getSensor();
		float getPeso();

		//set
		void setID(int i);
		void setMarca(string m);
		void setSensor(string s);
		void setPeso(float p);

    private:
		int id;
		string marca;
		string modelo;
		string sensor;
		float peso;
};

#endif // CAMARA_H
