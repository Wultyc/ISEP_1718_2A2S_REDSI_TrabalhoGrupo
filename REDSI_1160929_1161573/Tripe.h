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

    private:
		int id;
		string marca;
		string modelo;
		float peso;
};

#endif // TRIPE_H
