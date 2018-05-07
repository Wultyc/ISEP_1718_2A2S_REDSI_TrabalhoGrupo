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
		Stock(int i, Utilizador v, Produto p, float pc, bool n, int ur);
		Stock(Stock &s);
        virtual ~Stock();

		//get
		int getID();
		Utilizador getVendedor();
		Produto getProduto();
		int getPreco();
		bool isNovo();
		int getUnRestantes();

		//set
		void setID(int i);
		void setVendedor(Utilizador v);
		void setProduto(Produto p);
		void setPreco(int p);
		void setNovo(bool n);
		void setUnRestantes(int ur);
		
		string toString(bool condensed = false);
		string toStringFull();
		string toStringCons();

    private:
		int id;
	
		Utilizador vendedor;
		Produto produto;

		int preco;
		bool novo;
		int unRestantes;
};

#endif // STOCK_H
