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

		//get
		Utilizador getUtilizador();
		Produto getProduto();
		int getPreco();
		bool isNovo();
		int getUnRestantes()

		//set
		void setUtilizador(Utilizador u);
		void setProduto(Produto p);
		void setPreco(int p);
		void setNovo(bool n);
		void setUnRestantes(int ur);

    private:
		Utilizador vendedor;
		Produto produto;

		int preco;
		bool novo;
		int unRestantes;
};

#endif // STOCK_H
