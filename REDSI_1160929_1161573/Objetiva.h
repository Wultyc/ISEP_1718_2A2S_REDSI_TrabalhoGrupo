#ifndef OBJETIVA_H
#define OBJETIVA_H

#include <string>
#include "Produto.h"

using namespace std;

class Objetiva : public Produto
{
    public:
        Objetiva();
        virtual ~Objetiva();

		//get
		int getID();
		string getMarca();
		string getModelo();
		string getTipo();
		float getZoomMax();
		float getZoomMin();
		float getAbrMax();
		float getAbrMin();
		float getPeso();

		//set
		void setID(int i);
		void setMarca(string m);
		void setTipo(string t);
		void setZoomMax(float zM);
		void setZoomMin(float zm);
		void setAbrMax(float aM);
		void setAbrMin(float am);
		void setPeso(float p);

    private:
		int marca;
		string modelo;
		string tipo;
		float zoom_min;
		float zoom_max;
		float abr_min;
		float abr_max;
		float peso;
};

#endif // OBJETIVA_H
