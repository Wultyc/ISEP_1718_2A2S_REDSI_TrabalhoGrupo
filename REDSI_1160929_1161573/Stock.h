#ifndef STOCK_H
#define STOCK_H

#include <string>
#include "Utilizador.h"
#include "Produto.h"

using namespace std;

class Stock
{
    public:
        Stock();
        virtual ~Stock();

    private:
		Utilizador vendedor;
		Produto produto;

		int preco;
		bool novo;
		int unRestantes;
};

#endif // STOCK_H
