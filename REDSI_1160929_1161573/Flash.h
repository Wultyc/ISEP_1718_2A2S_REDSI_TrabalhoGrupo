#ifndef FLASH_H
#define FLASH_H

#include <string>
#include "Produto.h"

using namespace std;

class Flash : public Produto
{
    public:
        Flash();
        virtual ~Flash();

    private:
		int id;
		string marca;
		string modelo;
		float peso;
};

#endif // FLASH_H
