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
