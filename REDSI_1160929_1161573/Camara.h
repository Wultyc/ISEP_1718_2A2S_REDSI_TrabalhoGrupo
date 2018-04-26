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

    private:
		int id;
		string marca;
		string modelo;
		string sensor;
		float peso;
};

#endif // CAMARA_H
